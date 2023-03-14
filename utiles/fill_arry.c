/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_arry.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:56:55 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/13 23:32:09 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

// static int ft_check_double(int *arry, int i, int num)
// {
// 	if (!arry)
// 		return (0);
// 	while (i--)
// 		if(num == arry[i])
// 			return (0);
// 	return (1);
// }

static int ft_split_arg(int *arry, int *i, char **av)
{
	long int	tmp;
	while (*av)
	{
		tmp = ft_atoi(*av++);
		if (tmp > INT_MAX || tmp < INT_MIN )
			ft_erour(2);
		arry[--(*i)] = (int)tmp;
	}
	return (*i);
}

int	*fill_arry(char **av, int size, int **arry)
{
	if (!av)
		return (NULL);
	int i;

	*arry = ft_calloc(size, sizeof(int));
	i = size;
	if(!arry)
		return (NULL);
	while (i)
	{
		ft_split_arg(*arry, &i, ft_split(*av++, ' '));
	}
	return (*arry);
}