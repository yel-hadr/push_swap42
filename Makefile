NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c ./utiles/rule.c ./utiles/ft_Erour.c ./utiles/ft_putstr_fd.c \
		./utiles/ft_check_ARG.c ./utiles/ft_strlen.c
OBJ = $(SRC:.c=.o)

%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

all		: util $(NAME)



$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -lm ./utiles/printf/libftprintf.a -o $(NAME)

util	:
	@make -C ./utiles/printf

clean	:
	@rm -f $(OBJ)
	@make -C ./utiles/printf clean

fclean	:
	@rm -rf $(OBJ) $(NAME)
	@make -C ./utiles/printf fclean

re		: fclean all