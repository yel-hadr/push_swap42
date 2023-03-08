/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr <yel-hadr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:10:06 by yel-hadr          #+#    #+#             */
/*   Updated: 2022/10/23 22:10:10 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long n, unsigned int i, char *s, \
unsigned int *tab)
{
	if (tab[1] == 0)
	{
		if (n >= tab[2])
		{
			ft_putnbr_base(n / tab[2], 0, s, tab);
			ft_putnbr_base(n % tab[2], 0, s, tab);
		}
		else
		{
			ft_putchar(s[n], tab);
		}
	}
	else if (tab[1] == 1)
	{
		if (i >= tab[2])
		{
			ft_putnbr_base(0, (i / tab[2]), s, tab);
			ft_putnbr_base(0, (i % tab[2]), s, tab);
		}
		else
		{
			ft_putchar(s[i], tab);
		}
	}
}
