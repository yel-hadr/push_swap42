/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:54:54 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/23 05:07:45 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_rule(t_stack *a, t_stack *b, char *str)
{
	if (!ft_strncmp(str, "ra\n", ft_strlen(str)))
		ra(a);
	else if (!ft_strncmp(str, "rb\n", ft_strlen(str)))
		rb(b);
	else if (!ft_strncmp(str, "rr\n", ft_strlen(str)))
		rr(a, b);
	else if (!ft_strncmp(str, "rrr\n", ft_strlen(str)))
		rrr(a, b);
	else if (!ft_strncmp(str, "rra\n", ft_strlen(str)))
		rra(a);
	else if (!ft_strncmp(str, "rrb\n", ft_strlen(str)))
		rrb(b);
	else if (!ft_strncmp(str, "pa\n", ft_strlen(str)))
		pa(a, b);
	else if (!ft_strncmp(str, "pb\n", ft_strlen(str)))
		pb(a, b);
	else if (!ft_strncmp(str, "ss\n", ft_strlen(str)))
		ss(a, b);
	else if (!ft_strncmp(str, "sa\n", ft_strlen(str)))
		sa(a);
	else if (!ft_strncmp(str, "sb\n", ft_strlen(str)))
		sb(b);
	else
		ft_erour();
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		*arry;
	int		size;
	char	*str;

	if (ac == 1)
		return (1);
	arry = NULL;
	size = ft_check_arg(av, ac, &arry);
	fill_stack(arry, size, &a, &b);
	sorting_arry(a, &arry, size);
	str = get_next_line(0);
	while (str)
	{
		do_rule(&a, &b, str);
		str = get_next_line(0);
	}
	if (ft_memcmp(a.arry, arry, size * sizeof(int)))
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
	return (0);
}
