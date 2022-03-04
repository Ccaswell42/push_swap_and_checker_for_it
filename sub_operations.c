/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:37:53 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/23 14:45:31 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **lst)
{
	t_list	*tmp;

	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	tmp->next = (*lst);
	(*lst) = tmp;
}

void	rotate(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while ((*lst))
	{
		if ((*lst)->next == NULL)
		{
			(*lst)->next = tmp;
			break ;
		}
		(*lst) = (*lst)->next;
	}
	(*lst) = tmp->next;
	tmp->next = NULL;
}

void	reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*p;

	tmp = *lst;
	if (tmp->next == NULL)
		return ;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	p = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(lst, p);
	*lst = p;
}

static long long	atoi3(const char *str, int i, int c)
{
	long long	d;
	char		e;

	d = 0;
	if (!((str[i] >= '0') && (str[i] <= '9')))
		ft_error();
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		e = str[i];
		d = ((d * 10) + (e - '0'));
		if (((d * c) > 2147483647) || ((d * c) < -2147483648))
			ft_error();
		i++;
	}
	return (d * c);
}

long long	ft_atoi2(const char *str)
{
	int			i;
	int			c;

	i = 0;
	c = 1;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') \
			|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		c = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (atoi3(str, i, c));
}
