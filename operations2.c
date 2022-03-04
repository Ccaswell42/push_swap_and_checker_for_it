/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:38:16 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/22 15:32:07 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write (1, "rr\n", 3);
}

void	rra(t_list **lst)
{
	reverse_rotate(lst);
	write (1, "rra\n", 4);
}

void	rrb(t_list **lst)
{
	reverse_rotate(lst);
	write (1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write (1, "rrr\n", 4);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;

	tmp_a = *stack_a;
	if (tmp_a == NULL)
		return ;
	*stack_a = (*stack_a)->next;
	tmp_a->next = NULL;
	ft_lstadd_front(stack_b, tmp_a);
	write (1, "pb\n", 3);
}
