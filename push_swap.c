/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:02:11 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/15 22:23:37 by yel-hadr         ###   ########.fr       */
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
	int i = 0;
	while (size > i)
	{
		ft_printf("tab[%d] = %d\tsize == %d\n",i ,a.arry[i], b.arry[i]);
		i++;
	}
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	ra(&a);
	rb(&a);
	i = 0;
	while (size > i)
	{
		ft_printf("a = %d\tb = %d\n",a.arry[i] ,b.arry[i]);
		i++;
	}
	ft_printf("a.end = %d\t\ta.top = %d\n",a.end[0] ,a.top[0]);
	ft_printf("b.end = %d\t\tb.top = %d\n",b.end[0] ,b.top[0]);
}