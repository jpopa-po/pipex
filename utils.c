/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:59:24 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/18 18:49:57 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pipex.h"
#include"libft/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int	ft_sizenbool(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] != '\0' && --n)
		{
			if (ft_isalpha(s1[i]) && ft_isalpha(s2[i]))
			{
				if (ft_tolower(s1[i]) != ft_tolower(s2[i]))
					return (0);
			}
			else if (s2[i] == '\0')
				return (0);
			++i;
		}
		if (s1[i] == s2[i])
			return (1);
	}
	return (0);
}

void	ft_ermsg(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

char	*ft_create(char *str, char *filename)
{
	char	*buf;

	buf = (char *)malloc(ft_strlen(str) + ft_strlen(filename) + 16);
	ft_strcat(buf, str);
	ft_strcat(buf, "/");
	ft_strcat(buf, filename);
	return (buf);
}

char	**ft_path(void)
{
	int			i;
	char		*p;
	char		**str;

	i = 0;
	str = NULL;
	while (environ[i] != '\0')
	{
		if ((ft_sizenbool(environ[i], "PATH", 4)) == 1)
		{
			p = environ[i];
			p += 5;
			str = ft_split(p, ':');
			i = -34;
			break ;
		}
		else
			i++;
	}
	return (str);
}
