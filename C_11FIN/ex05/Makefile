SRCS = ft_atoi.c main.c ft_putnbr.c operations.c

HEADER = -I ft.h

all :
	gcc -Wall -Werror -Wextra ${HEADER} -o do-op ${SRCS}

clean :
	rm -f *.o

fclean : clean
	rm -f do-op

re : fclean all
