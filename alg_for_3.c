/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_for_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:05:27 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/23 17:02:12 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	alg_for_3(t_list **stack_a)
{
	t_list	*temp;
	int		b;
	int		c;

	temp = *stack_a;
	b = temp->next->index;
	c = temp->next->next->index;
	if ((temp->index == 0) & (b == 2) && (c == 1))
	{
		sa(&temp);
		ra(&temp);
	}
	else if ((temp->index == 1) & (b == 0) && (c == 2))
		sa(&temp);
	else if ((temp->index == 1) & (b == 2) && (c == 0))
		rra(&temp);
	else if ((temp->index == 2) & (b == 0) && (c == 1))
		ra(&temp);
	else if ((temp->index == 2) & (b == 1) && (c == 0))
	{
		sa(&temp);
		rra(&temp);
	}
	*stack_a = temp;
}
