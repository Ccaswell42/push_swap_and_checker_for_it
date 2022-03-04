/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:18:53 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/22 18:55:19 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_index(t_list **stack_b)
{
	int		max_ind;
	t_list	*tmp;

	max_ind = 0;
	tmp = *stack_b;
	while ((*stack_b))
	{
		if ((*stack_b)->index > max_ind)
			max_ind = (*stack_b)->index;
		*stack_b = (*stack_b)->next;
	}
	*stack_b = tmp;
	return (max_ind);
}

static void	back_home(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		c;

	tmp = *stack_b;
	while (*stack_b)
	{
		c = max_index(stack_b);
		if ((*stack_b)->index == c)
		{
			ra_or_rra(stack_a, &tmp, c);
			*stack_b = tmp;
			continue ;
		}
		(*stack_b) = (*stack_b)->next;
	}
}

void	alg_main(t_list **stack_a, t_list **stack_b, int c)
{
	int	count;

	count = 0;
	while ((*stack_a) != NULL)
	{
		if (count > 1 && (*stack_a)->index <= count)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			count++;
		}
		else if ((*stack_a)->index <= count + c)
		{
			pb(stack_a, stack_b);
			count++;
		}
		else if ((*stack_a)->index >= count)
			ra(stack_a);
	}
	back_home(stack_a, stack_b);
}
