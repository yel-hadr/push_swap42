/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:21:46 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/11 19:36:26 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoi(const char *str)
{
	int			s;
	int			i;
	long int	r;

	s = 1;
	r = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s *= -1;
	while (ft_isdigit(str[i]))
	{
		r = (r * 10) + (str[i++] - '0');
	}
	return (r * s);
}
