/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr <yel-hadr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:09:54 by yel-hadr          #+#    #+#             */
/*   Updated: 2022/10/17 13:02:47 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, unsigned int *count)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			ft_putchar(s[i++], count);
	}
	else if (!s)
	{
		ft_putstr("(null)", count);
	}
}
