/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:50:42 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/05 13:30:22 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	stack_a(t_stack a, char **str, int i)
{
	int n;

	n = 0;
	while (str[n])
	{
		if (ft_isdigit(*str[n]) || *str[n] == '-')
		{
			a.a[n] = ft_atoi(str[n]);
			a.count_a++;
		}
		n++;
	}
	return (a);
}

t_stack	pb(t_stack stack)
{
	int	i;

	i = stack.count_b;
	while (i > 0)
	{
		stack.b[i] = stack.b[i - 1];
		i--;
	}
	stack.b[0] = stack.a[0];
	i = 0;
	while (i < stack.count_a)
	{
		stack.a[i] = stack.a[i + 1];
		i++;
	}
	stack.count_b++;
	stack.count_a--;
	return (stack);
}

t_stack pa(t_stack stack)
{
	int i;

	i = stack.count_a;
	while (i > 0)
	{
		stack.a[i] = stack.a[i - 1];
		i--;
	}
	stack.a[0] = stack.b[0];
	i = 0;
	while (i < stack.count_b)
	{
		stack.b[i] = stack.b[i + 1];
		i++;
	}
	stack.count_a++;
	stack.count_b--;
	return (stack);
}
