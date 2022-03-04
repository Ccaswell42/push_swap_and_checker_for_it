/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:38:21 by ccaswell          #+#    #+#             */
/*   Updated: 2022/03/04 17:25:01 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	choose_alg(int argc, int *inp)
{
	t_list	*a;
	t_list	*b;

	a = make_stack_a(inp, argc);
	if (ft_i_sorted(&a) == 0)
		exit (0);
	ft_index(&a);
	b = make_stack_b();
	if (argc == 4)
		alg_for_3(&a);
	else if (argc == 5)
		alg_for_4(&a, &b);
	else if (argc == 6)
		alg_for_5(&a, &b);
	else
	{
		if (argc > 100)
			alg_main(&a, &b, 24);
		else
			alg_main(&a, &b, 17);
	}
	exit (0);
}

void	only_one_arg(char **argv)
{
	char	**splt;
	int		i;
	int		*inp;

	i = 0;
	splt = ft_split(argv[1], ' ');
	if (!splt)
		ft_error();
	while (splt[i])
		i++;
	inp = parsing((i + 1), splt, 0);
	choose_alg((i + 1), inp);
	exit(0);
}

int	main(int argc, char **argv)
{
	int	*inp;

	if (argc == 2)
		only_one_arg(argv);
	else if (argc > 2)
	{
		inp = parsing(argc, argv, 1);
		choose_alg(argc, inp);
	}
	exit(0);
}
