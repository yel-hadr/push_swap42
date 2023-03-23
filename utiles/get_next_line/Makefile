# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-hadr < yel-hadr@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 05:07:53 by yel-hadr          #+#    #+#              #
#    Updated: 2023/03/21 11:31:31 by yel-hadr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libget_next_line.a
DEPS = get_next_line.h
CC = cc
FLAG = -Wall -Wextra -Werror
SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all