/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utile.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:02:52 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/07 21:56:42 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILE_H

# define FT_UTILE_H

# include <stdlib.h> 
# include "./printf/ft_printf.h"

void	ft_putstr_fd(char *s, int fd);
void	ft_erour(int fd);
size_t	ft_strlen(const char *str);
int		ft_check_arg(char **av, int ac);

#endif