/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:46:12 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/20 12:59:54 by yel-hadr         ###   ########.fr       */
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
			{
				rb(b);
				ft_printf("rb\n");
			}
		}
		else if (i < 0)
		{
			while (i)
			{
				rrb(b);
				ft_printf("rrb\n");
				i++;
			}
		}
		pa(a, b);
		ft_printf("pa\n");
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
	if (range > size)
		range = size - 1;
	while(i < size)
	{
		end = i + range;
		if (end >= size)
			end = size - 1;
		else
			start = i;
		if ((*a->top >= arry[start] && *a->top <= arry[end]) || (*a->end >= arry[start] && *a->end <= arry[end]))
		{
			if (*a->top >= arry[start] && *a->top <= arry[end])
			{
				pb(a,b);
				ft_printf("pb\n");
				i++;
			}
			else if((*a->end >= arry[start] && *a->end <= arry[end]))
			{
				rra(a);
				pb(a,b);
				ft_printf("rra\npb\n");
				i++;
			}
		}
		else if (*a->top < arry[start] || *a->end < arry[start])
		{
			if (*a->top < arry[start])
			{
				pb(a, b);
				rb(b);
				ft_printf("pb\nrb\n");
				i++;
			}
			else if (*a->end < arry[start])
			{
				rra(a);
				ft_printf("rra\n");
			}
		}
		else
		{
			ra(a);
			ft_printf("ra\n");
		}
	}
	sorting_stack_b(a, b , arry , size);
}
