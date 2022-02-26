/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:18:24 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/20 12:17:36 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "libft/libft.h"

void	ft_exec(char **argv)
{
	char	**path;
	char	*buf;
	int		i;

	i = 0;
	path = ft_path();
	while (path[i] != '\0')
	{
		buf = ft_create(path[i], argv[0]);
		if (execve(buf, argv, environ) != -1)
		{
			i = -34;
			break ;
		}
		else
			i++;
	}
	if (i >= 0)
		ft_ermsg("Command not found\n");
}

void	ft_pid1(int fd1, int *pip, char *cmd1)
{
	char	**command1;

	command1 = ft_split(cmd1, ' ');
	dup2(fd1, 0);
	dup2(pip[1], 1);
	close(fd1);
	close(pip[0]);
	close(pip[1]);
	if (command1[0][0] == '/')
	{
		if (execve(command1[0], command1, environ) == -1)
			ft_ermsg("No such command, try removing the /\n");
	}
	else
		ft_exec(command1);
	close(fd1);
	close(pip[0]);
	close(pip[1]);
}

void	ft_pid2(int fd2, int *pip, char *cmd2)
{
	char	**command2;

	wait (NULL);
	command2 = ft_split(cmd2, ' ');
	dup2(pip[0], 0);
	dup2(fd2, 1);
	close(pip[0]);
	close(pip[1]);
	close(fd2);
	if (command2[0][0] == '/')
	{
		if (execve(command2[0], command2, environ) == -1)
			ft_ermsg("No such command, try removing the /\n");
	}
	else
		ft_exec(command2);
	close(fd2);
	close(pip[0]);
	close(pip[1]);
}

void	ft_pipex(char **argv, pid_t pid, int fd1, int *pip)
{
	int		fd2;

	fd1 = open(argv[0], O_RDONLY);
	fd2 = open(argv[3], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND,
			S_IRWXU, 0666);
	if (fd1 < 0 || fd2 < 0)
		ft_ermsg("File open failure\n");
	pid = fork();
	if (pid == -1)
		ft_ermsg("Process creation error \n");
	else if (pid == 0)
		ft_pid1(fd1, pip, argv[1]);
	pid = fork();
	if (pid == -1)
		ft_ermsg("Error\n");
	else if (pid == 0)
		ft_pid2(fd2, pip, argv[2]);
	close(fd1);
	close(fd2);
	close(pip[0]);
	close(pip[1]);
}
