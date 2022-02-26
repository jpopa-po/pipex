/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:32:35 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/05/28 18:32:35 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_cont(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		neg;
	int		len;
	char	*tab;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (n < 0)
		neg = 1;
	if (neg == 1)
		n *= -1;
	len = ft_cont(n);
	tab = (char *)malloc(sizeof(char) * len + neg + 1);
	if (!tab)
		return (NULL);
	tab[len + neg] = '\0';
	while (len > 0)
	{
		tab[--len + neg] = n % 10 + 48;
		n /= 10;
	}
	if (neg == 1)
		tab[0] = '-';
	return (tab);
}
/*
int main(void)
{
	printf("%s\n", ft_itoa(-8));
	return (0);
}*/
