/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ARG.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:10:06 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/11 10:56:17 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

static int ft_is_valid(char *arg)
{
	char *ptr;

	ptr = arg;
	if (!arg)
		return (0);
	if ((*arg == '-' || *arg == '+') || ft_isdigit(*arg))
		arg++;
	else
		return 0;
	while (*arg)
	{
		if (!ft_isdigit(*arg))
			return (0);
		arg++;
	}
	return (1);
}

static int check_arg(char **av)
{
	int i;

	i = 0;
	if (!av)
		return (0);
	while(*av)
	{
		if (!ft_is_valid(*av++))
			ft_erour(2);
		i++;
	}
	return i;
}

int ft_check_arg(char **av, int ac)
{
	int size;
	int i;

	i = 0;
	size = 0;
	while (ac-- > 1)
	{
		i = check_arg(ft_split(av[ac],' '));
		if (i)
			size += i;
		else
			ft_erour(2);
	}
	if(size < 3)
		exit(0);
	return (size);
}
