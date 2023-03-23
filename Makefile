NAME = push_swap
BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./utiles/printf/libftprintf.a ./utiles/libft/libft.a ./utiles/rules/librule.a ./utiles/get_next_line/libget_next_line.a
M_SRC = push_swap.c 
SRC = ./utiles/ft_Erour.c ./utiles/ft_check_ARG.c \
		./utiles/fill_arry.c ./utiles/ft_fill_stack.c ./utiles/sorting.c ./utiles/sorting_stack.c
BONUS_SRC = checker.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)
OBJ = $(SRC:.c=.o)
M_OBJ = $(M_SRC:.c=.o)

all		: util $(NAME)

$(NAME) : $(OBJ) $(M_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(M_OBJ) $(LIBFT)  -o $(NAME)

bonus	: util $(BONUS)

$(BONUS) : $(OBJ) $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(BONUS_OBJ) $(LIBFT)  -o $(BONUS)

util	:
	@make -C ./utiles/libft
	@make -C ./utiles/printf
	@make -C ./utiles/rules
	@make -C ./utiles/get_next_line

clean	:
	@rm -f $(OBJ) $(BONUS_OBJ) $(M_OBJ)
	@make -C ./utiles/libft clean
	@make -C ./utiles/printf clean
	@make -C ./utiles/rules clean
	@make -C ./utiles/get_next_line clean

fclean	: clean
	@rm -rf $(NAME) $(BONUS)
	@make -C ./utiles/libft fclean
	@make -C ./utiles/printf fclean
	@make -C ./utiles/rules fclean
	@make -C ./utiles/get_next_line fclean

re		: fclean all