SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

HEADER = -I ./includes/

GCC = gcc -Wall -Wextra -Werror

libft.a : ${OBJS}
	ar rcs libft.a ${OBJS}

.c.o:
	${GCC} ${HEADER} -c $< -o ${<:.c=.o}

all : libft.a

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f libft.a

re: fclean all
