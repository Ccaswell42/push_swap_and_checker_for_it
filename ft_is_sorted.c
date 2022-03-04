/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:38:24 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/23 15:40:15 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_i_sorted(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
