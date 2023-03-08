/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ARG.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:10:06 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/07 23:17:37 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

int ft_check_arg(char **av, int ac)
{
	int size;
	// char *arg;
	(void)av;
	size = 0;
	while (ac-- > 1)
	{
		if(!ft_strlen(av[ac]))
			ft_erour(2);
		ft_printf("%s\n", av[ac]);
	}
	return size;
}