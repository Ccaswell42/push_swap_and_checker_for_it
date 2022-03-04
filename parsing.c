/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:38:01 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/23 13:50:01 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_valid(int *inp, int a, int b)
{
	int	i;

	i = 1;
	while (i < b)
	{
		if (inp[i - 1] == a)
			ft_error();
		i++;
	}
	return ;
}

int	*parsing(int argc, char **argv, int s)
{
	int	*inp;
	int	i;

	if (argc < 1)
		ft_error();
	inp = malloc (sizeof(int) * (argc - 1));
	if (!inp)
		ft_error();
	i = 0;
	while (i < (argc - 1))
	{
		inp[i] = ft_atoi2(argv[s]);
		ft_valid(inp, inp[i], (i + 1));
		i++;
		s++;
	}
	return (inp);
}
