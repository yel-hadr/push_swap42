/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr <yel-hadr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:42:05 by yel-hadr          #+#    #+#             */
/*   Updated: 2022/10/23 19:42:09 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(va_list l, char c, unsigned int *count)
{
	count[1] = 1;
	count[2] = 16;
	if (c == 'x')
		ft_putnbr_base(0, va_arg(l, unsigned int), B, count);
	else if (c == 'X')
		ft_putnbr_base(0, va_arg(l, unsigned int), A, count);
	else if (c == 'p')
	{
		count[1] = 0;
		ft_putstr("0x", count);
		ft_putnbr_base(va_arg(l, unsigned long), 0, B, count);
	}
	else if (c == 'u')
	{
		count[2] = 10;
		ft_putnbr_base(0, va_arg(l, unsigned int), A, count);
	}
}

static void	print(va_list l, char c, unsigned int *count)
{
	if (c == '%')
		ft_putchar('%', count);
	if (c == 'c')
		ft_putchar(va_arg(l, int), count);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(l, int), count);
	else if (c == 'p' || c == 'x' || c == 'X' || c == 'u')
		ft_puthex(l, c, count);
	else if (c == 's')
		ft_putstr(va_arg(l, char *), count);
}

int	ft_printf(const char *c, ...)
{
	va_list			list;
	unsigned int	count[3];

	count[0] = 0;
	va_start(list, c);
	while (*c)
	{
		if (*c == '%')
		{
			c++;
			print(list, *c, count);
		}
		else
			ft_putchar(*c, count);
		c++;
	}
	va_end(list);
	return (*count);
}
