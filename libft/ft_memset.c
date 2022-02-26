/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:49:53 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/11 17:09:31 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (n--)
	{
		str[i] = ((unsigned char)c);
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '.', 7);
	puts(str);
	return (0);
}*/
