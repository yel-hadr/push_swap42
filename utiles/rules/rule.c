/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:02:59 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/20 21:10:12 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rule.h"

void	ft_rule(t_stack *a,t_stack *b, char *str)
{
	if(!ft_strncmp(str, "ra\n", ft_strlen(str)))
		ra(a);
	else if(!ft_strncmp(str, "rb\n", ft_strlen(str)))
		rb(b);
	else if(!ft_strncmp(str, "rr\n", ft_strlen(str)))
		rr(a, b);
	else if(!ft_strncmp(str, "rrr\n", ft_strlen(str)))
		rrr(a, b);
	else if(!ft_strncmp(str, "rra\n", ft_strlen(str)))
		rra(a);
	else if(!ft_strncmp(str, "rrb\n", ft_strlen(str)))
		rrb(b);
	else if(!ft_strncmp(str, "pa\n", ft_strlen(str)))
		pa(a, b);
	else if(!ft_strncmp(str, "pb\n", ft_strlen(str)))
		pb(a, b);
	else if (!ft_strncmp(str, "ss\n", ft_strlen(str)))
		ss(a, b);
	else if (!ft_strncmp(str, "sa\n", ft_strlen(str)))
		sa(a);
	else if (!ft_strncmp(str, "sb\n", ft_strlen(str)))
		sb(b);
	ft_putstr_fd(str, 1);
}