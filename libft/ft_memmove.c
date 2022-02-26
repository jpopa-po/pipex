/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:42:44 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/11 17:09:32 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*ccs;
	char			*ccd;

	ccs = (char *)src;
	ccd = (char *)dest;
	if (ccs < ccd)
	{
		n--;
		while (n + 1 > 0)
		{
			ccd[n] = ccs[n];
			n--;
		}
	}
	else
		ft_memcpy(ccd, ccs, n);
	return (ccd);
}
/*
int	main(void)
{
	char		dest[] = "old";
	const char	src[] = "new";

	printf("Before memmove = %s | src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove = %s | src = %s\n", dest, src);
	return (0);
}
*/
