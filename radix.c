/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:04:35 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:39:18 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_max_index(t_stack *stack)
{
	int	max;
	int	size;

	max = stack->index;
	size = stack_size(stack);
	while (size--)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

static int	find_max_bits(t_stack *stack)
{
	int	max_index;
	int	max_bits;

	max_index = find_max_index(stack);
	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	max;
	int	i;
	int	j;

	if (!stack_a || !*stack_a)
		return ;
	size = stack_size(*stack_a);
	max = find_max_bits(*stack_a);
	i = 0;
	while (i < max)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
