/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 10:45:51 by ktwomey           #+#    #+#             */
/*   Updated: 2018/09/10 14:47:16 by ktwomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	line(t_stack stack)
{
	char	*line;
	int		ret;

	line = NULL;
	ret = 1;
	while (ret)
	{
		ret = get_next_line(0, &line);
		if (!ret)
			break ;
		stack = checker(line, stack);
	}
	checking(stack);
}

t_stack	checker(char *str, t_stack stack)
{
	int	i;

	if (ft_strcmp(str, "sa") == 0)
		stack = sa(stack);
	if (ft_strcmp(str, "sb") == 0)
		stack = sb(stack);
	if (ft_strcmp(str, "ra") == 0)
		stack = ra(stack);
	if (ft_strcmp(str, "rb") == 0)
		stack = rb(stack);
	if (ft_strcmp(str, "rr") == 0)
		stack = rr(stack);
	if (ft_strcmp(str, "rra") == 0)
		stack = rra(stack);
	if (ft_strcmp(str, "rrb") == 0)
		stack = rrb(stack);
	if (ft_strcmp(str, "rrr") == 0)
		stack = rrr(stack);
	i = 0;
	return (stack);
}

t_stack	checking(t_stack stack)
{
	int	i;
	int	n;

	i = 0;
	n = i + 1;
	while (stack.a[i] < stack.a[n] && n < stack.count_a)
	{
		n = i + 1;
		if (stack.a[i] < stack.a[n])
		{
			if (n == stack.count_a - 1)
			{
				ft_putendl("OK");
				exit(0);
			}
			n++;
		}
		i++;
	}
	ft_putendl("KO");
	exit(0);
}
