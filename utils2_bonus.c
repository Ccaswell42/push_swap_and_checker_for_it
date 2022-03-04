/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:45:33 by ccaswell          #+#    #+#             */
/*   Updated: 2022/03/04 17:38:35 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	ra_push(t_list **stack_b, t_list **stack_a, int d)
{
	while (d != 0)
	{
		rb(stack_b);
		d--;
	}
	pa(stack_b, stack_a);
}

static void	rra_push(t_list **stack_b, t_list **stack_a, int i, int d)
{
	while (d != i)
	{
		rrb(stack_b);
		d++;
	}
	pa(stack_b, stack_a);
}

void	ra_or_rra(t_list **stack_a, t_list **stack_b, int ent)
{
	t_list	*tmp;
	int		i;
	int		d;

	tmp = *stack_b;
	d = 0;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	tmp = *stack_b;
	while (tmp->index != ent)
	{
		tmp = tmp->next;
		d++;
	}
	if ((i - d) >= (i / 2))
		ra_push(stack_b, stack_a, d);
	else
		rra_push(stack_b, stack_a, i, d);
}

void	main_check(t_list *a, t_list *b)
{
	char	*str;

	while (1)
	{
		str = get_next_line();
		if (str == 0)
			break ;
		cmd_check(str, &a, &b);
		free(str);
	}
	if (str)
		free(str);
	if (a == NULL)
	{
		write(1, "KO\n", 3);
		exit (0);
	}
	if ((ft_i_sorted(&a) == 0) && (!b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	exit (0);
}
