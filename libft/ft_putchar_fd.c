/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:47:06 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/15 15:39:17 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
    int fd;
    fd = open("putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return (1);

    ft_putchar_fd('R', fd);

    int close (int fd);
    return (0);
}*/
