/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_for_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:37:25 by ccaswell          #+#    #+#             */
/*   Updated: 2022/03/04 12:42:30 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	alg_for_3_2(t_list **stack_a)
{
	t_list	*temp;
	int		b;
	int		c;

	temp = *stack_a;
	b = temp->next->index;
	c = temp->next->next->index;
	if ((temp->index == 1) & (b == 3) && (c == 2))
	{
		sa(&temp);
		ra(&temp);
	}
	else if ((temp->index == 2) & (b == 1) && (c == 3))
		sa(&temp);
	else if ((temp->index == 2) & (b == 3) && (c == 1))
		rra(&temp);
	else if ((temp->index == 3) & (b == 1) && (c == 2))
		ra(&temp);
	else if ((temp->index == 3) & (b == 2) && (c == 1))
	{
		sa(&temp);
		rra(&temp);
	}
	*stack_a = temp;
}

void	push_min_b(t_list **stack_a, t_list **stack_b, int ind)
{
	if (ind == 0)
		pb(stack_a, stack_b);
	else if (ind == 1)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (ind == 2)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (ind == 3)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
}

void	alg_for_4(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_a;
	int		ind;

	ind = 0;
	temp_a = *stack_a;
	while (temp_a)
	{
		if (temp_a->index == 0)
			break ;
		ind++;
		temp_a = temp_a->next;
	}
	push_min_b(stack_a, stack_b, ind);
	alg_for_3_2(stack_a);
	pa(stack_b, stack_a);
}
