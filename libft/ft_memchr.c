/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:22:07 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/11 17:09:34 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sstr;
	size_t	i;

	i = 0;
	sstr = (char *) s;
	while (i < n)
	{
		if ((char)c == *sstr)
			return (sstr);
		sstr++;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char		str[] = "mubonico";
	const char		ch = 'o';
	char			*ret;

	ret = ft_memchr(str, ch, strlen(str));
	printf("|%c|==>>|%s|\n", ch, ret);
	return (0);
}*/
