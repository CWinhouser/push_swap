/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:31:03 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/10 14:54:36 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	ra(t_stack a)
{
	int		i;
	int		top;

	i = 0;
	top = a.a[0];
	while (i < a.count_a)
	{
		a.a[i] = a.a[i + 1];
		i++;
	}
	a.a[a.count_a - 1] = top;
	return (a);
}

t_stack	rb(t_stack b)
{
	int		i;
	int		top;

	i = 0;
	top = b.b[0];
	while (i < b.count_b)
	{
		b.b[i] = b.b[i + 1];
		i++;
	}
	b.b[b.count_b - 1] = top;
	return (b);
}

t_stack	rr(t_stack stack)
{
	stack = ra(stack);
	stack = rb(stack);
	return (stack);
}
