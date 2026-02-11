/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:26:50 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/22 18:29:37 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] && little[j] && i + j < len
			&& big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)big + i);
			}
		}
		i++;
		j = 0;
	}
	return (0);
}
