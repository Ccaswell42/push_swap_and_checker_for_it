/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:38:18 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/25 16:55:04 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_list **lst)
{
	swap(lst);
}

void	sb(t_list **lst)
{
	swap(lst);
}

void	ra(t_list **lst)
{
	rotate(lst);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	rb(t_list **lst)
{
	rotate(lst);
}
