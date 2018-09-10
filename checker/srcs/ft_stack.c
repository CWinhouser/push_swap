/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:50:42 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/10 14:48:08 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	error(t_stack stack)
{
	int	i;
	int	n;

	i = 0;
	while (i != stack.count_a)
	{
		n = i + 1;
		while (n != stack.count_a)
		{
			if (stack.a[i] == stack.a[n])
			{
				ft_putendl("Error");
				exit(0);
			}
			n++;
		}
		i++;
	}
}

void	input(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isdigit(*str[i])) && !(*str[i] == '-'))
		{
			ft_putendl("Error");
			exit(0);
		}
		i++;
	}
	is_int(str);
}

t_stack	stack_a(t_stack a, char **str)
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
	error(a);
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

t_stack	pa(t_stack stack)
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
