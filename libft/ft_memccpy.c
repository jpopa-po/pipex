/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:04:13 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/11 17:09:35 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*cd;
	unsigned char	*cs;

	cd = (unsigned char *)dest;
	cs = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		cd[i] = cs[i];
		if (cd[i] == (unsigned char)c)
			return (cd + i + 1);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	src[50] = "Copiado";
	char		dest[50];

	strcpy(dest, "Sin Copiar");
	printf("Before->dest = %s\n", dest);
	ft_memccpy(dest, src, 'i', strlen(src) + 1);
	printf("After->dest = %s\n", dest);
	return (0);
}*/
