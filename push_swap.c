/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:02:11 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/23 00:52:51 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tree(t_stack *a, t_stack *b)
{
	int	i;

	i = 6;
	while (i--)
	{
		if (*a->end < *a->top)
			ft_rule(a, b, "rra\n");
		else if (*a->top > *(a->top + 1))
			ft_rule(a, b, "sa\n");
		else if (*a->end < *(a->top + 1))
		{
			ft_rule(a, b, "sa\n");
			ft_rule(a, b, "ra\n");
		}
	}
}

void	sort_tree_b(t_stack *a, t_stack *b, int size)
{
	int	i;

	if (size > 1)
	{
		i = 6;
		while (i--)
		{
			if (*b->end > *b->top)
				ft_rule(a, b, "rrb\n");
			else if (*b->top < *(b->top + 1))
				ft_rule(a, b, "sb\n");
			else if (*a->end < *(a->top + 1))
			{
				ft_rule(a, b, "sb\n");
				ft_rule(a, b, "rb\n");
			}
		}
	}
	while (size--)
		ft_rule(a, b, "pa\n");
}

int	push_to_b(t_stack *a, t_stack *b, int *arry, int size)
{
	int	i;

	i = 0;
	if (*a->top >= *arry && *a->top <= arry[size - 4])
	{
		ft_rule(a, b, "pb\n");
		i--;
	}
	else if (*a->end >= *arry && *a->end <= arry[size - 4])
	{
		ft_rule(a, b, "rra\n");
		ft_rule(a, b, "pb\n");
		i--;
	}
	else
		ft_rule(a, b, "ra\n");
	return (i);
}

void	sort_small_size(t_stack *a, t_stack *b, int *arry, int size)
{
	int	i;

	i = size - 3;
	if (size > 3)
	{
		while (i)
		{
			i += push_to_b(a, b, arry, size);
		}
		sort_tree(a, b);
		sort_tree_b(a, b, size - 3);
	}
	else
		sort_tree(a, b);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		*arry;
	int		size;

	if (ac == 1)
		return (1);
	arry = NULL;
	size = ft_check_arg(av, ac, &arry);
	fill_stack(arry, size, &a, &b);
	if (sorting_arry(a, &arry, size))
		return (0);
	if (size < 7)
		sort_small_size(&a, &b, arry, size);
	else
		sorting_stack(&a, &b, arry, size);
	while (1)
		;
}
