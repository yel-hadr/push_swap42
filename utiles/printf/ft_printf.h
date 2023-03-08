/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr <yel-hadr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:44:11 by yel-hadr          #+#    #+#             */
/*   Updated: 2022/10/25 00:41:45 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

# define B "0123456789abcdef"
# define A "0123456789ABCDEF"

int		ft_printf(const char *c, ...);
void	ft_putstr(char *s, unsigned int *count);
void	ft_putnbr(int n, unsigned int *count);
void	ft_putchar(char c, unsigned int *count);
void	ft_putnbr_base(unsigned long n, unsigned int i, char *s, \
unsigned int *count);

#endif
