/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:39:12 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/22 18:15:54 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	size_t			i;

	one = (unsigned char *) s1;
	two = (unsigned char *) s2;
	i = 0;
	while (n > i)
	{
		if (one[i] != two[i])
			return (one[i] - two[i]);
		i++;
	}
	return (0);
}
