NAME = libftprintf.a
DEPS = ft_printf.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putnbr.c ft_putchar.c \
ft_putstr.c ft_putnbr_base.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $^

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
