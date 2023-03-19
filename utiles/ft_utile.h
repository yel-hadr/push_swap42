/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utile.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:02:52 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/18 13:33:23 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILE_H

# define FT_UTILE_H

# include <stdlib.h>
# include <stdio.h>
# include "./printf/ft_printf.h"
# include "./libft/libft.h"
# include "./rules/ft_rule.h"

void	ft_erour(int fd);
int		ft_check_arg(char **av, int ac, int **arry);
int		*fill_arry(char **av, int size, int **arry);
void	fill_stack(int *arry, int size, t_stack *a, t_stack *b);
void	sorting_arry(int **arry, int size);
void	sorting_stack(t_stack *a, t_stack *b, int *arry, int size);

#endif