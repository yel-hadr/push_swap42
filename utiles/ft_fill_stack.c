/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:37:02 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/13 20:23:17 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

void	fill_stack(int *arry, int size, t_stack *a, t_stack *b)
{
	if (!arry)
		return ;
	a->arry = ft_calloc(sizeof(int), size);
	b->arry = ft_calloc(sizeof(int), size);
	if (!a->arry || !b->arry)
		return ;
	a->size = size;
	b->size = size;
	ft_memmove(a->arry, arry, size * sizeof(int));
}