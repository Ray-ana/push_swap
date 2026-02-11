/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:45:03 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/20 21:51:18 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_supp(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_new(char const *str, size_t start, size_t len)
{
	size_t		i;
	char		*novela;

	novela = ft_calloc(len + 1, sizeof(char));
	if (!novela)
		return (NULL);
	i = 0;
	while (i < len)
	{
		novela[i] = str[i + start];
		i++;
	}
	return (novela);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_supp(set, s1[i]))
		i++;
	while (j > i && ft_supp(set, s1[j]))
		j--;
	return (ft_new(s1, i, j - (i - 1)));
}
