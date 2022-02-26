/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:53:56 by kiru              #+#    #+#             */
/*   Updated: 2022/02/11 17:35:03 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	k;
	size_t	len;
	size_t	i;
	size_t	j;

	k = 0;
	len = ft_strlen(dest);
	if (len < size)
	{
		i = ft_strlen(src) + len;
		if (size > i + 1)
			j = i + 1;
		else
			j = size;
		while (k + 1 < j - len)
		{
			dest[len + k] = src[k];
			k++;
		}
		dest[len + k] = '\0';
	}
	else
		i = ft_strlen(src) + size;
	return (i);
}
/*
int main(void)
{
		char *dest;
		dest =
		memset(dest, 'r', 15);
		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
		write(1, "\n", 1);
		write(1, dest, 15);
	return(0);
}
*/
