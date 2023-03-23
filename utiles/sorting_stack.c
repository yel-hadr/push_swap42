/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:46:12 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/22 18:53:06 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

void	sorting_stack_b(t_stack *a, t_stack *b, int *arry, int size)
{
	int	i;

	while (b->top <= b->end)
	{
		i = find_the_big(b->top, b->end - b->top, arry[--size]);
		if (i > 0)
		{
			while (i--)
				ft_rule(a, b, "rb\n");
		}
		else if (i < 0)
		{
			while (i)
			{
				ft_rule(a, b, "rrb\n");
				i++;
			}
		}
		ft_rule(a, b, "pa\n");
	}
}

static int	if_in_the_range(t_stack *a, t_stack *b, int start, int end)
{
	if (*a->top >= start && *a->top <= end)
		ft_rule(a, b, "pb\n");
	else if ((*a->end >= start && *a->end <= end))
	{
		ft_rule(a, b, "rra\n");
		ft_rule(a, b, "pb\n");
	}
	return (1);
}

static int	if_less(t_stack *a, t_stack *b, int start)
{
	if (*a->top < start)
	{
		ft_rule(a, b, "pb\n");
		ft_rule(a, b, "rb\n");
		return (1);
	}
	else if (*a->end < start)
		ft_rule(a, b, "rra\n");
	return (0);
}

int	do_range(t_stack *a, t_stack *b, int start, int end)
{
	int	i;

	i = 0;
	if ((*a->top >= start && *a->top <= end) || \
			(*a->end >= start && *a->end <= end))
		i += if_in_the_range(a, b, start, end);
	else if (*a->top < start || *a->end < start)
		i += if_less(a, b, start);
	else
		ft_rule(a, b, "ra\n");
	while (*b->top < *b->end && *b->top + 3 < *b->end)
		ft_rule(a, b, "rrb\n");
	return (i);
}

void	sorting_stack(t_stack *a, t_stack *b, int *arry, int size)
{
	int	i;
	int	end;
	int	start;
	int	range;

	i = 0;
	start = 0;
	range = ft_rank(size);
	while (i < size)
	{
		range = ft_rank(size);
		end = i + range;
		if (end >= size)
			end = size - 1;
		else
			start = i;
		i += do_range(a, b, arry[start], arry[end]);
	}
	sorting_stack_b(a, b, arry, size);
}
