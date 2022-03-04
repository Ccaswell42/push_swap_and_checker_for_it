/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_for_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:38:13 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/23 15:44:57 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_min_b2(t_list **stack_a, int ind)
{
	if (ind == 1)
		sa(stack_a);
	else if (ind == 2)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (ind == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (ind == 4)
		rra(stack_a);
}

static void	alg_for_3_3(t_list **stack_a)
{
	t_list	*temp;
	int		b;
	int		c;

	temp = *stack_a;
	b = temp->next->index;
	c = temp->next->next->index;
	if ((temp->index == 2) & (b == 4) && (c == 3))
	{
		sa(&temp);
		ra(&temp);
	}
	else if ((temp->index == 3) & (b == 2) && (c == 4))
		sa(&temp);
	else if ((temp->index == 3) & (b == 4) && (c == 2))
		rra(&temp);
	else if ((temp->index == 4) & (b == 2) && (c == 3))
		ra(&temp);
	else if ((temp->index == 4) & (b == 3) && (c == 2))
	{
		sa(&temp);
		rra(&temp);
	}
	*stack_a = temp;
}

static int	ret_min_ind(t_list **stack_a, int t)
{
	t_list	*temp_a;
	int		ind;

	temp_a = *stack_a;
	ind = 0;
	while (temp_a)
	{
		if (temp_a->index == t)
			break ;
		ind++;
		temp_a = temp_a->next;
	}
	return (ind);
}

void	alg_for_5(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_a;
	t_list	*temp_b;
	int		ind;

	temp_a = *stack_a;
	temp_b = *stack_b;
	ind = 0;
	ind = ret_min_ind(&temp_a, 0);
	if (ind == 0)
		pb(&temp_a, &temp_b);
	else
	{
		push_min_b2(&temp_a, ind);
		pb(&temp_a, &temp_b);
	}
	ind = ret_min_ind(&temp_a, 1);
	push_min_b(&temp_a, &temp_b, ind);
	alg_for_3_3(&temp_a);
	pa(&temp_b, &temp_a);
	pa(&temp_b, &temp_a);
	*stack_a = temp_a;
}
