NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./utiles/printf/libftprintf.a ./utiles/libft/libft.a ./utiles/rules/librule.a
SRC = push_swap.c ./utiles/ft_Erour.c ./utiles/ft_check_ARG.c \
		./utiles/fill_arry.c ./utiles/ft_fill_stack.c ./utiles/sorting.c ./utiles/sorting_stack.c
OBJ = $(SRC:.c=.o)

all		: util $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT)  -o $(NAME)

util	:
	@make -C ./utiles/libft
	@make -C ./utiles/printf
	@make -C ./utiles/rules

clean	:
	@rm -f $(OBJ)
	@make -C ./utiles/libft clean
	@make -C ./utiles/printf clean
	@make -C ./utiles/rules clean

fclean	:
	@rm -rf $(OBJ) $(NAME)
	@make -C ./utiles/libft fclean
	@make -C ./utiles/printf fclean
	@make -C ./utiles/rules fclean

re		: fclean all