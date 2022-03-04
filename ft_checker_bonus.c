/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:46:52 by ccaswell          #+#    #+#             */
/*   Updated: 2022/03/04 15:11:44 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	cmd_check(char *str, t_list **a, t_list **b)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(a);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(b);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(a, b);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(b, a);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(a, b);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(a);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(b);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(a);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(b);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(a, b);
	else if (ft_strncmp(str, "rr\n", 4) == 0)
		rr(a, b);
	else
		ft_error();
}
