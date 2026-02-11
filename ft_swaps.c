/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:58:35 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:38:36 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **top)
{
	int	first;
	int	second;

	if (!*top || (*top)->next == *top)
		return ;
	first = (*top)->value;
	(*top)->value = (*top)->next->value;
	(*top)->next->value = first;
	second = (*top)->index;
	(*top)->index = (*top)->next->index;
	(*top)->next->index = second;
}

void	sa(t_stack **stack_a)
{
	ft_swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **stack_b)
{
	ft_swap(stack_b);
	write(1, "sb\n", 3);
}
