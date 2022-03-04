/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:38:12 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/22 18:45:51 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp_a;

	tmp_a = *stack_b;
	if (tmp_a == NULL)
		return ;
	*stack_b = (*stack_b)->next;
	tmp_a->next = NULL;
	ft_lstadd_front(stack_a, tmp_a);
	write (1, "pa\n", 3);
}
