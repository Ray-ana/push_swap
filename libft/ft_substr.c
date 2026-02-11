/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:09:40 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:33:22 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	sub_len;

	i = 0;
	sub_len = 0;
	while (start < ft_strlen(s) && sub_len < len && s[start + sub_len])
	{
		sub_len++;
	}
	sub = malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	while (start < ft_strlen(s) && i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
