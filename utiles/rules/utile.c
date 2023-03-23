/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:22:50 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/22 18:52:17 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rule.h"

int	find_the_big(int *arry, int size, int nb)
{
	int	i;
	int	j;

	i = 0;
	j = ++size;
	while (--j)
	{
		if (nb == arry[i++])
			return (i - 1);
		if (nb == arry[j])
			return (j - size);
	}
	return (0);
}

int	ft_rank(int size)
{
	return (size * 0.0375 + 11.25);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	if (!a || !b)
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
