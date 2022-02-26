/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:30:29 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/11 17:09:33 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char const	*str1;
	unsigned char const	*str2;
	unsigned int		i;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (i < (n - 1) && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
/*
exist
int	main(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	memcpy(str1, "abc", 6);
	memcpy(str2, "abcde", 6);
	ret = ft_memcmp(str1, str2, 8);
	if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return (0);
}
*/
