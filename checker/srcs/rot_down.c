/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_down.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:21:50 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/10 14:49:25 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	rra(t_stack a)
{
	int	bottom;
	int	i;

	i = a.count_a - 1;
	bottom = a.a[a.count_a - 1];
	while (i > 0)
	{
		a.a[i] = a.a[i - 1];
		i--;
	}
	a.a[0] = bottom;
	return (a);
}

t_stack	rrb(t_stack b)
{
	int	bottom;
	int	i;

	i = b.count_a - 1;
	bottom = b.a[b.count_a - 1];
	while (i > 0)
	{
		b.a[i] = b.a[i - 1];
		i--;
	}
	b.a[0] = bottom;
	return (b);
}

t_stack	rrr(t_stack stack)
{
	stack = rra(stack);
	stack = rrb(stack);
	return (stack);
}
