/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:35:09 by jpopa-po          #+#    #+#             */
/*   Updated: 2021/06/03 19:58:15 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (!cpy || !s)
		return (NULL);
	while (len--)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int	main(void)
{
	char	ch[6] ="hello";
	ft_strdup(ch);
	printf("%s", ch);
	return (0);
}*/
