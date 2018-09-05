/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:27:58 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/05 14:32:31 by ktwomey          ###   ########.fr       */
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
		str = &argv[i];
		stack = stack_a(stack, str, i);
		i++;
	}
	else 
	{
		str = ft_strsplit(argv[argc - 1], ' ');
		stack = stack_a(stack, str, 0);
	}
	stack = rra(stack);
	i = 0;
	while (i < stack.count_a)
	{
		printf("a[%d] : %d\n", i, stack.a[i]);
		i++;
	}
	return (1);
}
