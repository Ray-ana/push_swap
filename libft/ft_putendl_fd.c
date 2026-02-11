/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:32:01 by rzimaeva          #+#    #+#             */
/*   Updated: 2025/11/15 15:37:49 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*
int main(void)
{
    int fd;
    fd = open("putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return (1);

    ft_putendl_fd("ray", fd);
    ft_putendl_fd("carotte-kalash", fd);
	ft_putendl_fd("passe", fd);

    close (fd);
    return (0);
}*/