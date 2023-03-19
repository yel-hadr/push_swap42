/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:31:53 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/16 11:20:27 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RULE_H

# define FT_RULE_H

# include "../printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_stack
{
	int		size;
	int		*top;
	int		*end;
	int		*arry;
}	t_stack;

void	ft_swap(int *a, int *b);
void	ss(t_stack *a, t_stack *b);
void	sb(t_stack *b);
void	sa(t_stack *a);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
