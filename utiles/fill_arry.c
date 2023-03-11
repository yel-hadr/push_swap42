/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_arry.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:56:55 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/11 19:48:13 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

static int ft_split_arg(int *arry, int *i, char **av)
{
	while (*av)
	{
		if (ft_atoi(*av) > INT_MAX || ft_atoi(*av) < INT_MIN)
			ft_erour(2);
		arry[(*i)++] = (int)ft_atoi(*av++);
		ft_printf("%d\n",arry[(*i) - 1]);
	}
	return (*i);
}

int	*fill_arry(char **av, int size)
{
	if (!av)
		return (NULL);
	int *arry;
	int i;

	arry = ft_calloc(size, sizeof(int));
	i = 0;
	if(!arry)
		return (NULL);
	if (*av++)
	while (i < size)
	{
		ft_split_arg(arry, &i, ft_split(*av++, ' '));
	}
	return (arry);
}