/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:27:58 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/04 15:22:56 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	stack;
	char	*str;
	int		i;

	i = 1;
	str = NULL;
	stack.count_a = 0;
	stack.count_b = 0;
	stack.a = malloc(BUFF_SIZE);
	if (argc > 2)
	{
		while (i < argc)
		{
			str = argv[i];
			stack = stack_a(stack, str, i);
			i++;
		}
	}
	else
	{
		str = argv[argc - 1];
		stack = stack_a(stack, str, 0);
	}
	printf("%d", stack.count_a);
	return (1);
}
