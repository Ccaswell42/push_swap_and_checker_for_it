/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:37:31 by ccaswell          #+#    #+#             */
/*   Updated: 2022/03/04 16:12:12 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_list **stack_a, int data)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (!(tmp))
		ft_error();
	tmp->content = data;
	tmp->index = 0;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
}

void	rev(int *inp, int argc)
{
	int	i;
	int	a;
	int	d;

	i = 0;
	a = -1;
	while (i < (argc - 1))
		i++;
	while (++a < --i)
	{
		d = inp[a];
		inp[a] = inp[i];
		inp[i] = d;
	}
}

t_list	*make_stack_a(int *inp, int argc)
{
	t_list	*stack_a;
	int		i;

	i = 0;
	stack_a = NULL;
	rev(inp, argc);
	while (i < (argc -1))
	{
		push(&stack_a, inp[i]);
		i++;
	}
	return (stack_a);
}

t_list	*make_stack_b(void)
{
	t_list	*stack_b;

	stack_b = NULL;
	return (stack_b);
}
