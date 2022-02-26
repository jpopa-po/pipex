/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:26:12 by kiru              #+#    #+#             */
/*   Updated: 2021/05/27 15:58:59 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;
	char	*ptr;

	ptr = (char *)s;
	len = ft_strlen(s) + 1;
	while (len-- > 0)
	{
		if (*ptr++ == (char)c)
			return (--ptr);
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "mubonico";
	const char	ch = 'c';
	char		*ret;

	ret = ft_strchr(str, ch);
	printf("|%c|==>>|%s|\n", ch, ret);
	return (0);
}*/
