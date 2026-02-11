/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:47:12 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/18 13:59:10 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*dest;
	long	nb;

	count = ft_count_size(n);
	nb = n;
	if (nb < 0 || count == 0)
		count++;
	dest = ft_calloc(sizeof(char), count + 1);
	if (!dest)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		dest[0] = '-';
		i++;
	}
	while (count > i)
	{
		dest[--count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (dest);
}
