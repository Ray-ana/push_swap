/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:47:03 by rzimaeva          #+#    #+#             */
/*   Updated: 2026/02/11 16:40:17 by rzimaeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// Structures
typedef struct s_stack_head
{
	struct s_stack_valind	*head;
}							t_stack_h;

typedef struct s_stack_valind
{
	int						value;
	int						index;
	struct s_stack_valind	*next;
	struct s_stack_valind	*prev;
}							t_stack;

// Instructions
void						ft_push(t_stack **top_a, t_stack **top_b);
void						pa(t_stack **top_a, t_stack **top_b);
void						pb(t_stack **top_a, t_stack **top_b);

void						ft_reverse_rotate(t_stack **top);
void						rra(t_stack **stack_a);
void						rrb(t_stack **stack_b);
void						ft_rotate(t_stack **top);
void						ra(t_stack **stack_a);
void						rb(t_stack **stack_b);

void						ft_swap(t_stack **top);
void						sa(t_stack **stack_a);
void						sb(t_stack **stack_b);

// Minisort
void						ft_index(t_stack *stack);
int							already_sorted(t_stack *stack);
void						sort_three(t_stack **stack_a);
void						sort_five(t_stack **stack_a, t_stack **stack_b);
void						minisort(t_stack **stack_a, t_stack **stack_b);

// Parsing_un et deux
int							is_number(char *str);
long						ft_atol(const char *str);
void						free_tab(char **tab);
void						node_back(t_stack **stack, t_stack *new);
t_stack						*node_new(int n);
int							ft_doublon(t_stack *stack, int n);
int							stack_size(t_stack *stack);
t_stack						*ft_parsing(int ac, char **av);

// Radix
void						radix_sort(t_stack **stack_a, t_stack **stack_b);

// Main
void						free_stack(t_stack **stack);

#endif
