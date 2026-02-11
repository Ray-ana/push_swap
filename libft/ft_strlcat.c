/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:22:54 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/17 17:19:30 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s;
	size_t	len_d;
	size_t	result;
	int		i;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	result = 0;
	i = 0;
	if (size > len_d)
		result = len_d + len_s;
	else
		result = len_s + size;
	while (src[i] && size > len_d + 1)
	{
		dst[len_d] = src[i];
		i++;
		len_d++;
	}
	dst[len_d] = '\0';
	return (result);
}
