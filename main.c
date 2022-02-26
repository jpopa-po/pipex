/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:14:21 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/20 12:00:44 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv)
{
	int	fd1;
	int	pip[2];

	if (argc != 5)
		ft_ermsg("Usage: ./pipex file1 cmd1 cmd2 file2\n");
	else
	{
		pipe(pip);
		ft_pipex(++argv, 0, fd1, pip);
	}
	return (0);
}
