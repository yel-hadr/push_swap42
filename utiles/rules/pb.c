/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:35:09 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/22 18:09:04 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rule.h"

void	pb(t_stack *a, t_stack *b)
{
	*(--b->top) = *(a->top++);
	*(a->top - 1) = 0;
}
