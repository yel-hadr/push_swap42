/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:02:11 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/19 20:00:00 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	if(ac == 1)
		return(1);
	int *arry;
	int size;
	t_stack a;
	t_stack	b;
	

	arry = NULL;
	size = ft_check_arg(av, ac, &arry);
	fill_stack(arry, size, &a, &b);
	sorting_arry(&arry, size);
	sorting_stack(&a, &b, arry, size);
}
