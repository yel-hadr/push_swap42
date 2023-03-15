/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:46:32 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/14 22:23:57 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rule.h"

void	sa(t_stack *a)
{
	ft_swap(a->top, a->top + 1);
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	ft_swap(b->top, b->top + 1);
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}
