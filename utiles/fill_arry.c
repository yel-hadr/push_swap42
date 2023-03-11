/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_arry.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:56:55 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/11 19:31:12 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

static int ft_split_arg(int *arry, int *i, char **av)
{
	while (*av)
	{
		ft_printf("arry[%d] = %d\n", *i, ft_atoi(*av));
		arry[(*i)++] = ft_atoi(*av++);
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
	ft_printf("%d\n", size);
	if (*av++)
	while (i < size)
	{
		ft_split_arg(arry, &i, ft_split(*av++, ' '));
	}
	return (arry);
}