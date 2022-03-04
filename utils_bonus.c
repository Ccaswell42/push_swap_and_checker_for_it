/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:30:23 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/25 16:55:25 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*ptr;
	t_list	*temp;

	temp = *lst;
	if (!(lst))
	{
		*lst = new;
		return ;
	}
	else
	{
		ptr = new;
		ptr->next = temp;
	}
	*lst = ptr;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter;
	t_list	*p;

	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	iter = *lst;
	p = iter;
	while (iter)
	{
		if (iter->next == 0)
		{
			iter->next = new;
			*lst = p;
			return ;
		}
		iter = iter->next;
	}
}

void	ft_index(t_list **stack_a)
{
	t_list	*temp;
	t_list	*temp_dup;

	temp = *stack_a;
	temp_dup = *stack_a;
	while (temp)
	{
		temp_dup = *stack_a;
		while (temp_dup)
		{
			if (temp->content > temp_dup->content)
				temp->index++;
			temp_dup = temp_dup->next;
		}	
		temp = temp->next;
	}
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
