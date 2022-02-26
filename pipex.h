/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:40:04 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/18 18:28:24 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <errno.h>
# include <string.h>
# include <unistd.h>
# define READ 0
# define WRITE 1

extern char	**environ;

void	ft_pipex(char **argv, pid_t pid, int fd1, int *pip);
char	**ft_path(void);
void	ft_exec(char **argv);
void	ft_pid1(int fd1, int *pip, char *cmd1);
void	ft_pid2(int fd2, int *pip, char *cmd2);
char	*ft_create(char *str, char *file);
int		ft_sizenbool(char const *s1, char const *s2, size_t n);
void	ft_ermsg(char *str);
#endif