/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:23:12 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/15 15:39:32 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"                                                     

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
int main(void)
{
    int fd;
    fd = open("putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return (1);

    ft_putstr_fd("ray", fd);
	write(fd,"\n", 1);
    ft_putstr_fd("carotte-kalash", fd);

    close (fd);
    return (0);
}*/