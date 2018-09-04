/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:18:01 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/04 13:02:03 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../includes/libft/libft.h"
# include <stdio.h>
# define BUFF_SIZE 4096

typedef struct	s_stack
{
	int		*a;
	int		*b;
	int		count_a;
	int		count_b;
}	t_stack;

t_stack		sa(t_stack a);
t_stack		sb(t_stack b);
t_stack 	ss(t_stack stack);
t_stack		stack_a(t_stack a, char *str, int i);
t_stack		stack_b(t_stack, int i);

#endif
