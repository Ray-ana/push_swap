/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:25:37 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:33:56 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char) c;
	while (s[i])
	{
		if (s[i] == ch)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (ch == '\0')
	{
		return ((char *) &s[i]);
	}
	return (NULL);
}
