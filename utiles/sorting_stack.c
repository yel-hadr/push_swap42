/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:46:12 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/18 20:23:50 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

static int ft_rank(int size)
{
	int nb;
	nb = (double)((double)size * 0.00375) + 11.25;
	return nb;
}

void	sorting_stack(t_stack *a, t_stack *b, int *arry, int size)
{
	int i;
	int end;
	int start = 0;
	int range;

	i = 0;
	range = ft_rank(size);
	if (range > size)
		range = size / 2;
	while(i < size)
	{
		end = i + 30;
		if (end >= size)
			end = size - 1;
		else
			start = i;
		if (*a->top < arry[start])
		{
			pb(a, b);
			rb(b);
			ft_printf("pb\n");
			ft_printf("rb\n");
			i++;
		}
		else if (*a->top >= arry[start] && *a->top <= arry[end])
		{
			pb(a,b);
			ft_printf("pb\n");
			i++;
		}
		else
		{
			ra(a);
			ft_printf("ra\n");
		}
	}
}
