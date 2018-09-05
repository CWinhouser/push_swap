/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:16:58 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/05 13:59:24 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libc.h>

t_stack	sa(t_stack a)
{
	int	temp;

	temp = a.a[n];
	a.a[n] = a.a[n + 1];
	a.a[n + 1] = temp;
}

t_stack	sb(t_stack b)
{
	int	temp;

	temp = b.b[0];
	b.b[0] = b.b[1];
	b.b[1] = temp;
	return (b);
}

t_stack	ss(t_stack stack)
{
	stack = sa(stack);
	stack = sb(stack);
	return (stack);
}
