/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:25:32 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/20 12:07:46 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rule.h"

void	rra(t_stack *a)
{
	int tmp;
	int *end;
	
	if (a->end < a->top)
		return ;
	tmp = *a->end;
	end = a->end;
	while (end >= a->top)
	{
		if (end == a->top)
			*a->top = tmp;
		else
			*end = *(end - 1);
		end--;
	}
}

void	rrb(t_stack *b)
{
	int tmp;
	int *end;
	
	if (b->end < b->top)
		return ;
	tmp = *b->end;
	end = b->end;
	while (end >= b->top)
	{
		if (end == b->top)
			*b->top = tmp;
		else
			*end = *(end - 1);
		end--;
	}
}
void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
