/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:37:09 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/21 13:19:49 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 42

size_t	ft_strlen_get(const char *s);
char	*ft_strjoin_get(const char *s1, const char *s2);
char	*ft_strdup_get(const char *s);
void	*ft_calloc_get(size_t count, size_t size);
void	*ft_memmove_get(void *dst, const void *src, size_t len);
char	*get_next_line(int fd);

#endif