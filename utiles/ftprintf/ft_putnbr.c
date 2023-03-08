/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr <yel-hadr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:46:57 by yel-hadr          #+#    #+#             */
/*   Updated: 2022/10/17 13:01:05 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, unsigned int *count)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr((n / 10), count);
		ft_putnbr((n % 10), count);
	}
	else
	{
		ft_putchar(n + 48, count);
	}
}
