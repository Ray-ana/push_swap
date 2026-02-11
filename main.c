/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:44:34 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:30:05 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*checkpoint;
	int		size;

	if (!stack || !*stack)
		return ;
	size = stack_size(*stack);
	checkpoint = *stack;
	while (size--)
	{
		temp = checkpoint;
		checkpoint = checkpoint->next;
		free(temp);
	}
	*stack = NULL;
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	b = NULL;
	a = ft_parsing(ac, av);
	if (!a)
		return (0);
	ft_index(a);
	if (!already_sorted(a))
	{
		if (stack_size(a) <= 5)
			minisort(&a, &b);
		else
			radix_sort(&a, &b);
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}
