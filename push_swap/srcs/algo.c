/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:59:09 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/10 10:09:23 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_order(t_stack stack)
{
	int	i;
	int	order;

	order = 0;
	i = 0;
	while (i < stack.count_a - 1)
	{
		if (stack.a[i] > stack.a[i + 1])
			order++;
		i++;
	}
	if (order == 0)
		exit(0);
	if (stack.count_a == 3)
		stack = sort_three(stack);
	if (stack.count_a > 3)
		stack = sorting(stack);
	return (stack);
}

int		ft_find(t_stack a)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	while (i < a.count_a)
	{
		if (a.a[n] > a.a[i])
			n = i;
		i++;
	}
	return (n);
}

t_stack	sort_three(t_stack a)
{
	int	i;

	i = 0;
	while (i != 3)
	{
		if (a.a[0] > a.a[1])
			a = sa(a);
		if (a.a[0] > a.a[2])
			a = rra(a);
		if (a.a[1] > a.a[2])
		{
			a = rra(a);
			a = sa(a);
		}
		i++;
	}
	if (a.count_b > 0)
	{
		while (a.count_b != 0)
			a = pa(a);
	}
	return (a);
}

t_stack	sorting(t_stack stack)
{
	int	n;
	int	finder;

	while (stack.count_a != 3)
	{
		n = ft_find(stack);
		finder = stack.a[n];
		while (stack.a[0] != finder)
		{
			if (n >= stack.count_a / 2)
				stack = rra(stack);
			else
				stack = ra(stack);
		}
		stack = pb(stack);
	}
	stack = sort_three(stack);
	return (stack);
}
