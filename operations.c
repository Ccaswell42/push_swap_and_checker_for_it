/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:38:18 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/22 15:32:14 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **lst)
{
	swap(lst);
	write(1, "sa\n", 3);
}

void	sb(t_list **lst)
{
	swap(lst);
	write(1, "sb\n", 3);
}

void	ra(t_list **lst)
{
	rotate(lst);
	write (1, "ra\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write (1, "ss\n", 3);
}

void	rb(t_list **lst)
{
	rotate(lst);
	write (1, "rb\n", 3);
}
