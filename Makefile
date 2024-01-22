NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

CC = cc

SRCS = check_format.c ft_printf.c function.c ft_strchr.c

OBJ = $(SRCS:.c=.o)

REMOVE = rm -f

CCA = ar -rcs

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CCA $(NAME) $(OBJ)

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
