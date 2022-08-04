NAME = rush-02

SRCS = main.c srcs/*.c 

HEADER = -I ./includes

all: $(NAME)

$(NAME):
			gcc -Wall -Wextra -Werror $(HEADER) -o $(NAME) $(SRCS)

clean:
		rm -f *.o

fclean:
		rm -f $(NAME)

re: fclean all