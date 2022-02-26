/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:34:34 by kiru              #+#    #+#             */
/*   Updated: 2022/02/11 17:09:20 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	len2;
	char	*tab;

	i = 0;
	tab = (char *)big;
	len2 = ft_strlen(little);
	if (len2 == 0 || big == little)
		return (tab);
	while (tab[i] != '\0' && i < len)
	{
		c = 0;
		while (tab[i + c] != '\0' && little[c] != '\0'
			&& tab[i + c] == little[c] && i + c < len)
			c++;
		if (c == len2)
			return (tab + i);
		i++;
	}
	return (0);
}
