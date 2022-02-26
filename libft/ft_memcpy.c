/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:25:12 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/11 17:09:33 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = 0;
	if (n == 0 || s1 == s2)
		return (s1);
	while (n-- != 0)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
/*
int	main(void)
{
	const char	src[50] = "Copiado";
	char		dest[50];

	strcpy(dest, "Sin Copiar");
	printf("Before->dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("After->dest = %s\n", dest);
	return (0);
}*/
