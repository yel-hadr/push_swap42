/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:42:58 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/07 20:43:20 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utile.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	p = ft_calloc(len + 1, sizeof(char));
	if (!p)
		return (NULL);
	ft_memmove(p, &s[start], len);
	return (p);
}