/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:32:14 by kiru              #+#    #+#             */
/*   Updated: 2022/02/11 17:09:15 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*aux;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start - 1)
		len = ft_strlen(s) - start ;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	aux = str;
	while (len-- > 0 && *(s + start))
		*aux++ = *(s++ + start);
	*aux = '\0';
	return (str);
}
