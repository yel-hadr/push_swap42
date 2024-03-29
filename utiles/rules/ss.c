/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:46:32 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/18 14:36:07 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rule.h"

void	sa(t_stack *a)
{
	if (a->top == a->end)
		return ;
	ft_swap(a->top, a->top + 1);
}

void	sb(t_stack *b)
{
	if (b->top == b->end)
		return ;
	ft_swap(b->top, b->top + 1);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
