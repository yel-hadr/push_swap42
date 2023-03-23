NAME = librule.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ss.c utile.c pb.c pa.c rr.c rrr.c rule.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $^

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
