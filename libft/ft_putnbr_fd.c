/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:46:32 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/22 19:27:13 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 0 && n < 10)
	{
		ft_putchar_fd(n + 48, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	return ;
}

/*
int main(void)
{
    int fd;
	fd = open("putnbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return (1);

    ft_putnbr_fd(56, fd);
	ft_putchar_fd('\n', fd);
    ft_putnbr_fd(10, fd);
	ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-79, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-2147483648, fd);

    close (fd);
    return (0);
}*/
