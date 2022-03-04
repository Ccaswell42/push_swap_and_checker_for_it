/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:37:15 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/25 17:38:10 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ra_push(t_list **stack_b, t_list **stack_a, int d)
{
	while (d != 0)
	{
		rb(stack_b);
		d--;
	}
	pa(stack_b, stack_a);
}

static void	rra_push(t_list **stack_b, t_list **stack_a, int i, int d)
{
	while (d != i)
	{
		rrb(stack_b);
		d++;
	}
	pa(stack_b, stack_a);
}

void	ra_or_rra(t_list **stack_a, t_list **stack_b, int ent)
{
	t_list	*tmp;
	int		i;
	int		d;

	tmp = *stack_b;
	d = 0;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	tmp = *stack_b;
	while (tmp->index != ent)
	{
		tmp = tmp->next;
		d++;
	}
	if ((i - d) >= (i / 2))
		ra_push(stack_b, stack_a, d);
	else
		rra_push(stack_b, stack_a, i, d);
}
