/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 10:55:14 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/10 14:48:32 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack stack;
	char	**str;

	str = NULL;
	stack.count_a = 0;
	stack.count_b = 0;
	stack.a = malloc(4096);
	stack.b = malloc(4096);
	if (argc > 2)
	{
		input(str = &argv[1]);
		stack = stack_a(stack, &argv[1]);
	}
	else
	{
		input(str = ft_strsplit(argv[argc - 1], ' '));
		stack = stack_a(stack, str);
	}
	line(stack);
	return (1);
}
