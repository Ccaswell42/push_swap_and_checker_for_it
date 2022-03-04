/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:47:53 by ccaswell          #+#    #+#             */
/*   Updated: 2022/03/04 16:20:18 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*gnl_util(char *str, int i)
{
	char	*cmd;

	cmd = malloc(sizeof(char) * i);
	if (!cmd)
		ft_error();
	i = 0;
	while (str[i] != 0)
	{
		cmd[i] = str[i];
		i++;
	}
	cmd[i] = '\0';
	return (cmd);
}

char	*gnl_util_2(int i, int r)
{
	char	*str;

	str = malloc(sizeof(char) * 4);
	if (!str)
		ft_error();
	while (r != 0)
	{
		r = read(0, &str[i], 1);
		if (r < 1)
		{
			free(str);
			return (NULL);
		}
		if (str[i] == '\n')
		{
			if (str[i - 1] == ' ')
				ft_error();
			i++;
			break ;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*get_next_line(void)
{
	char	*str;
	char	*cmd;
	int		r;
	int		i;

	i = 0;
	r = 1;
	str = gnl_util_2(i, r);
	if (str == NULL)
		return (NULL);
	cmd = gnl_util(str, i);
	free(str);
	return (cmd);
}

t_list	*only_one_arg(char **argv)
{
	char	**splt;
	int		i;
	int		*inp;
	t_list	*a;

	i = 0;
	splt = ft_split(argv[1], ' ');
	if (!splt)
		ft_error();
	while (splt[i])
		i++;
	inp = parsing((i + 1), splt, 0);
	a = make_stack_a(inp, i + 1);
	while (i > -1)
	{
		free(splt[i]);
		i--;
	}
	free (splt);
	free(inp);
	return (a);
}

int	main(int argc, char **argv)
{
	int		*inp;
	t_list	*a;
	t_list	*b;

	if (argc < 2)
		exit(0);
	if (argc == 2)
		a = only_one_arg(argv);
	else
	{
		inp = parsing(argc, argv, 1);
		a = make_stack_a(inp, argc);
	}
	ft_index(&a);
	b = make_stack_b();
	main_check(a, b);
	exit (0);
}
