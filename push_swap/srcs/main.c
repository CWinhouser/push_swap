/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:27:58 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/07 15:30:59 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	stack;
	char	**str;
	int		i;

	i = 1;
	str = NULL;
	stack.count_a = 0;
	stack.count_b = 0;
	stack.a = malloc(BUFF_SIZE);
	stack.b = malloc(BUFF_SIZE);
	if (argc > 2)
	{
		input(str = &argv[i]);
		stack = stack_a(stack, &argv[i], i);
		i++;
	}
	else 
	{
		input(str = ft_strsplit(argv[argc - 1], ' '));
		stack = stack_a(stack, str, 0);
	}
	stack = ft_order(stack);
	return (1);
}
