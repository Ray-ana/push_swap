/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:00:27 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:38:18 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*select_top_a(t_stack **top_a)
{
	t_stack	*prems;

	if (!*top_a)
		return (NULL);
	prems = (*top_a);
	if (prems->next == prems)
		*top_a = NULL;
	else
	{
		prems->prev->next = prems->next;
		prems->next->prev = prems->prev;
		(*top_a) = prems->next;
	}
	return (prems);
}

static void	new_top_b(t_stack **top_b, t_stack *prems)
{
	t_stack	*last;

	if ((*top_b) == NULL)
	{
		prems->next = prems;
		prems->prev = prems;
		*top_b = prems;
	}
	else
	{
		last = (*top_b)->prev;
		prems->next = *top_b;
		prems->prev = last;
		last->next = prems;
		(*top_b)->prev = prems;
		(*top_b) = prems;
	}
}

void	ft_push(t_stack **top_a, t_stack **top_b)
{
	t_stack	*prems;

	if (!(*top_a))
		return ;
	prems = select_top_a(top_a);
	new_top_b(top_b, prems);
}

void	pa(t_stack **top_a, t_stack **top_b)
{
	ft_push(top_b, top_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **top_a, t_stack **top_b)
{
	ft_push(top_a, top_b);
	write(1, "pb\n", 3);
}
