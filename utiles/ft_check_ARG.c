/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ARG.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:10:06 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/07 22:01:44 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

static int check_av(char *av, int size)
{
	int i;

	i = 0;
	
}

int ft_check_arg(char **av, int ac)
{
	int size;
	// char *arg;
	
	size = 0;
	while (ac-- > 1)
	{
		if(!ft_strlen(av[ac]))
			ft_erour(2);
		if ()
		ft_printf("%s\n", av[ac]);
	}
	return size;
}
