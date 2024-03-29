/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_arry.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:56:55 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/23 01:25:02 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

static int	ft_check_double(int *arry, int i, int num)
{
	if (!arry)
		return (0);
	while (i--)
		if (num == arry[i])
			return (0);
	return (1);
}

static int	ft_split_arg(int *arry, int *i, char **av)
{
	long int	tmp;
	char		**ptr;
	char		*str;

	ptr = av;
	while (*av)
	{
		str = *av;
		tmp = ft_atoi(*av++);
		if (tmp > INT_MAX || tmp < INT_MIN || !ft_check_double(arry, *i, tmp))
			ft_erour();
		arry[(*i)++] = (int)tmp;
		free(str);
	}
	free(ptr);
	return (*i);
}

int	*fill_arry(char **av, int size, int **arry)
{
	int		i;

	if (!av)
		return (NULL);
	*arry = ft_calloc(size, sizeof(int));
	i = 0;
	if (!arry)
		return (NULL);
	while (i < size)
	{
		ft_split_arg(*arry, &i, ft_split(*av++, ' '));
	}
	return (*arry);
}
