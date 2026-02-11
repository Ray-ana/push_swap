/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:28:30 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:38:59 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_stack *stack)
{
	t_stack	*min;
	t_stack	*temp;
	int		size;
	int		j;
	int		i;

	i = 0;
	size = stack_size(stack);
	while (i < size)
	{
		min = NULL;
		temp = stack;
		j = size;
		while (j--)
		{
			if (temp->index == -1 && (min == NULL || temp->value < min->value))
				min = temp;
			temp = temp->next;
		}
		if (min)
			min->index = i++;
	}
}

int	already_sorted(t_stack *stack)
{
	t_stack	*nb;
	int		i;
	int		size;

	i = 0;
	if (!stack || stack == stack->next)
		return (1);
	size = stack_size(stack);
	nb = stack;
	while (i < size - 1)
	{
		if (nb->value > nb->next->value)
			return (0);
		nb = nb->next;
		i++;
	}
	return (1);
}

void	sort_three(t_stack **stack_a)
{
	int	uno;
	int	dos;
	int	tres;

	uno = (*stack_a)->index;
	dos = (*stack_a)->next->index;
	tres = (*stack_a)->next->next->index;
	if (uno > dos && uno > tres && tres > dos)
		ra(stack_a);
	else if (uno > dos && uno > tres && dos > tres)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (uno < dos && dos > tres && uno > tres)
		rra(stack_a);
	else if (uno < dos && dos > tres && uno < tres)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (uno > dos && dos < tres && uno < tres)
		sa(stack_a);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	while (size > 3)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
		{
			pb(stack_a, stack_b);
			size--;
		}
		else
			ra(stack_a);
	}
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

void	minisort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4 || size == 5)
		sort_five(stack_a, stack_b);
}
