/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:27:58 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/22 18:54:21 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

int	sorting_arry(t_stack a, int **arr, int size)
{
	int	i;
	int	j;
	int	*arry;

	i = 0;
	arry = *arr;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arry[i] > arry[j])
				ft_swap(&arry[i], &arry[j]);
			j++;
		}
		i++;
	}
	if (!ft_memcmp(a.arry, arry, size * sizeof(int)))
		return (1);
	return (0);
}
