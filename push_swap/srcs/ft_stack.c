/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:50:42 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/04 14:55:33 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	stack_a(t_stack a, char *str, int i)
{
	int	n;
	int	j;

	j = 0;
	n = 0;
	if (i != 0)
	{
		a.a[i - 1] = ft_atoi(str);
		a.count_a++;
	}
	if (i == 0)
	{
		while (str[n])
		{
			if (ft_isdigit(str[n]) || str[n] == '-')
			{
				a.a[j] = ft_atoi(&(str[n]));
				while (ft_isdigit(str[n]))
					n++;
				j++;
			}
			n++;
		}
		a.count_a = j;
	}
	return (a);
}

t_stack	stack_b(t_stack b, int i)
{
	return (b);
}
