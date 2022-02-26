/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:43:10 by kiru              #+#    #+#             */
/*   Updated: 2021/05/31 20:31:36 by jpopa-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen2(const char *str, char c, size_t i)
{
	int	init;

	init = i;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i - init);
}

static	int	ft_count_w(const char *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	if (s[0] != c)
		word++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	if (word == 0)
		return (1);
	return (word);
}

static	char	*ft_put_w(const char *s, char c, int *i)
{
	char	*str;
	int		k;

	str = (char *)malloc(sizeof(char) * (ft_strlen2(s, c, *i) + 1));
	if (!str)
		return (NULL);
	k = 0;
	while (s[*i] != c && s[*i])
	{
		str[k] = s[*i];
		k++;
		*i += 1;
	}
	str[k] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	i = 0;
	j = 0;
	word = ft_count_w(s, c);
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_count_w(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < word && s[i])
	{
		str[j] = ft_put_w(s, c, &i);
		j++;
	}
	str[j] = NULL;
	return (str);
}

/*void	ft_try(char *str, char charset)
{
	char	**tab;
	int		i;

	tab = ft_split(str, charset);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

// int	main(void)
// {
	// ft_try("lorem ipsum dolor sit arisus. Suspendisse ", ' ');
	// return (0);
// }*/
