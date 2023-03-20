/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:13:36 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/20 19:21:10 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rule.h"

void	ra(t_stack *a)
{
	int	tmp;
	int *top;

	tmp = *a->top;
	top = a->top;
	while (top <= a->end)
	{
		if (top == a->end)
			*a->end = tmp;
		else
			*top = *(top + 1);
		top++;
	}
}

void	rb(t_stack *b)
{
	int	tmp;
	int *top;

	tmp = *b->top;
	top = b->top;
	while (top <= b->end)
	{
		if (top == b->end)
			*b->end = tmp;
		else
			*top = *(top + 1);
		top++;
	}
}

void	rr(t_stack *a, t_stack *b)
{
	rb(b);
	ra(a);
}
