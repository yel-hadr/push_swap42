/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:36:54 by yel-hadr          #+#    #+#             */
/*   Updated: 2023/03/21 19:35:01 by yel-hadr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_newline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_get_line(char *rest)
{
	int		new_line;
	char	*line;

	if (!rest || !*rest)
		return (NULL);
	new_line = find_newline(rest);
	if (new_line == -1)
	{
		line = ft_strdup_get(rest);
		return (line);
	}
	line = ft_calloc_get(new_line + 2, sizeof(char));
	line = ft_memmove_get(line, rest, new_line + 1);
	return (line);
}

char	*ft_get_rest(char *rest)
{
	int		len_rest;
	int		new_line;
	char	*tmp;

	if (!rest)
		return (NULL);
	len_rest = ft_strlen_get(rest);
	new_line = find_newline(rest);
	if (new_line != -1 && rest[new_line + 1])
	{
		tmp = ft_strdup_get(&rest[new_line + 1]);
		free (rest);
		rest = tmp;
		return (rest);
	}
	if (rest)
	{
		free (rest);
		rest = NULL;
	}
	return (rest);
}

char	*ft_read_fd(int fd, char *rest)
{
	int		read_size;
	char	*buffer;

	read_size = 1;
	buffer = ft_calloc_get(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	while (read_size > 0 && find_newline(buffer) == -1)
	{
		read_size = read(fd, buffer, BUFFER_SIZE);
		if (read_size > 0)
		{
			if (read_size != BUFFER_SIZE)
				buffer[read_size] = '\0';
			rest = ft_strjoin_get(rest, buffer);
		}
	}
	free (buffer);
	buffer = NULL;
	return (rest);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*rest;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	rest = ft_read_fd(fd, rest);
	line = ft_get_line(rest);
	rest = ft_get_rest(rest);
	return (line);
}
