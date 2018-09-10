/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:18:01 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/10 14:52:19 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../includes/libft/libft.h"
# include "../includes/get_next_line/get_next_line.h"
# include <stdio.h>

typedef struct	s_stack
{
	int		*a;
	int		*b;
	int		count_a;
	int		count_b;
}				t_stack;

t_stack			sa(t_stack a);
t_stack			sb(t_stack b);
t_stack			ss(t_stack stack);
t_stack			stack_a(t_stack a, char **str);
t_stack			pb(t_stack stack);
t_stack			pa(t_stack stack);
t_stack			ra(t_stack a);
t_stack			rb(t_stack b);
t_stack			rr(t_stack stack);
t_stack			rra(t_stack a);
t_stack			rrb(t_stack b);
t_stack			rrr(t_stack stack);
t_stack			sort_three(t_stack a);
t_stack			sorting(t_stack stack);
void			error(t_stack stack);
void			input(char **str);
void			is_int(char **str);
int				ft_find(t_stack a);
t_stack			ft_order(t_stack stack);
t_stack			checker(char *str, t_stack stack);
t_stack			checking(t_stack stack);
void			line(t_stack stack);

#endif
