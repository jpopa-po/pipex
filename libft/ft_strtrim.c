/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:07:13 by kiru              #+#    #+#             */
/*   Updated: 2022/02/11 17:09:18 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != 0 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == 0)
		return (ft_strdup(""));
	l = ft_strlen(s1);
	while (ft_strchr(set, s1[l]))
		l--;
	str = ft_substr(s1, 0, l + 1);
	return (str);
}
