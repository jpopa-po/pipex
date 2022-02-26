/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:32:18 by jpopa-po          #+#    #+#             */
/*   Updated: 2022/02/11 17:10:01 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*aux;

	aux = malloc(nmemb * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, (nmemb * size));
	return (aux);
}
