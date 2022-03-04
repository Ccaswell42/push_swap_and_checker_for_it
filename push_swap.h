/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:38:49 by ccaswell          #+#    #+#             */
/*   Updated: 2022/02/25 17:39:56 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				index;
	int				content;
	struct s_list	*next;
}	t_list;

void		ft_error(void);
void		ft_valid(int *inp, int a, int b);
int			*parsing(int argc, char **argv, int s);
t_list		*make_stack_a(int *inp, int argc);
void		sa(t_list **lst);
void		ra(t_list **lst);
void		rb(t_list **lst);
t_list		*make_stack_b(void);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		rra(t_list **lst);
void		pb(t_list **stack_a, t_list **stack_b);
void		swap(t_list **lst);
void		sb(t_list **lst);
void		rotate(t_list **lst);
void		rr(t_list **stack_a, t_list **stack_b);
void		reverse_rotate(t_list **lst);
void		ss(t_list **stack_a, t_list **stack_b);
void		rrb(t_list **lst);
void		rrr(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_b, t_list **stack_a);
int			ft_i_sorted(t_list **stack_a);
long long	ft_atoi2(const char *str);
void		alg_for_3(t_list **stack_a);
void		ft_index(t_list **stack_a);
void		ra_or_rra(t_list **stack, t_list **stack_b, int ent);
void		alg_for_4(t_list **stack_a, t_list **stack_b);
void		alg_for_5(t_list **stack_a, t_list **stack_b);
void		push_min_b(t_list **stack_a, t_list **stack_b, int ind);
void		choose_alg(int argc, int *inp);
void		alg_main(t_list **stack_a, t_list **stack_b, int c);
void		only_one_arg(char **argv);

#endif