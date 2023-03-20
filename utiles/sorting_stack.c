/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:46:12 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/20 23:45:47 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

static int ft_rank(int size)
{
	return (size * 0.0375 + 11.25);
}

int		find_the_big(int *arry, int size,int nb)
{
	int i;
	int j;
	i = 0;
	j = ++size;
	while (--j)
	{
		if (nb == arry[i++])
			return (i - 1);
		if (nb == arry[j])
			return (j - size);
	}
	return 0;
}

void 	sorting_stack_b(t_stack *a, t_stack *b, int *arry, int size)
{
	int i;
	while (b->top <= b->end)
	{
		i = find_the_big(b->top, b->end - b->top, arry[--size]);
		if  (i > 0)
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

void	sorting_stack(t_stack *a, t_stack *b, int *arry, int size)
{
	int i;
	int end;
	int start;
	int range;

	i = 0;
	start = 0;
	range = ft_rank(size);
	
	while(i < size)
	{
		range = ft_rank(size);
		end = i + range;
		if (end >= size)
			end = size - 1;
		else
			start = i;
		if ((*a->top >= arry[start] && *a->top <= arry[end]) || (*a->end >= arry[start] && *a->end <= arry[end]))
		{
			if (*a->top >= arry[start] && *a->top <= arry[end])
				ft_rule(a, b, "pb\n");
			else if((*a->end >= arry[start] && *a->end <= arry[end]))
			{
				ft_rule(a, b, "rra\n");
				ft_rule(a, b, "pb\n");
			}
			i++;
		}
		else if (*a->top < arry[start] || *a->end < arry[start])
		{
			if (*a->top < arry[start])
			{
				ft_rule(a, b, "pb\n");
				ft_rule(a, b, "rb\n");
				i++;
			}
			else if (*a->end < arry[start])
				ft_rule(a, b, "rra\n");
		}
		else
			ft_rule(a, b, "ra\n");
		while(*b->top < *b->end && *b->top + 3 < *b->end)
			ft_rule(a, b, "rrb\n");
	}
	sorting_stack_b(a, b , arry , size);
}
