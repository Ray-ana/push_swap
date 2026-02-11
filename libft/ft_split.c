/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:34:02 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/20 21:52:33 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

int	split_words(char **result, char const *s, char c, int word)
{
	int	start;
	int	i;

	i = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == 0)
			start = i + 1;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (i - start + 2));
			if (!result[word])
			{
				while (--word >= 0)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + start), i - start + 2);
			word++;
		}
		i++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
	{
		free(result);
		return (NULL);
	}
	return (result);
}
