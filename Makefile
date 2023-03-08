NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./utiles/printf/libftprintf.a ./utiles/libft/libft.a
SRC = push_swap.c ./utiles/rule.c ./utiles/ft_Erour.c ./utiles/ft_check_ARG.c
OBJ = $(SRC:.c=.o)

%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

all		: util $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT)  -o $(NAME)

util	:
	@make -C ./utiles/libft bonus
	@make -C ./utiles/printf

clean	:
	@rm -f $(OBJ)
	@make -C ./utiles/libft clean
	@make -C ./utiles/printf clean

fclean	:
	@rm -rf $(OBJ) $(NAME)
	@make -C ./utiles/libft fclean
	@make -C ./utiles/printf fclean

re		: fclean all