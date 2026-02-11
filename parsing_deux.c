/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_deux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:09:37 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:39:05 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_doublon(t_stack *stack, int n)
{
	t_stack	*first;

	if (!stack)
		return (0);
	first = stack;
	if (stack->value == n)
		return (1);
	stack = stack->next;
	while (stack != first)
	{
		if (stack->value == n)
			return (1);
		stack = stack->next;
	}
	return (0);
}

static void	create_stack(t_stack **stack_a, char **args, int i)
{
	long	val;

	while (args && args[i])
	{
		val = ft_atol(args[i]);
		if (!is_number(args[i]) || val > 2147483647 || val < -2147483648
			|| ft_doublon(*stack_a, (int)val))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		node_back(stack_a, node_new((int)val));
		i++;
	}
}

int	stack_size(t_stack *stack)
{
	t_stack	*checkpoint;
	int		count;

	if (!stack)
		return (0);
	count = 1;
	checkpoint = stack->next;
	while (checkpoint != stack)
	{
		count++;
		checkpoint = checkpoint->next;
	}
	return (count);
}

t_stack	*ft_parsing(int ac, char **av)
{
	int		i;
	t_stack	*a;
	char	**args;

	a = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		i = 0;
		create_stack(&a, args, i);
		free_tab(args);
	}
	else
	{
		args = av;
		i = 1;
		create_stack(&a, args, i);
	}
	return (a);
}
