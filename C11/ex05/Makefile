CC = gcc
NAME = do-op
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : main.o operator.o
	gcc $(CFLAGS) -o $(NAME) main.o operator.o

main.o : main.c
	gcc $(CFLAGS) -c main.c

operator.o : operator.c
	gcc $(CFLAGS) -c operator.c

clean :
	rm -f main.o operator.o

fclean : clean
	rm -f $(NAME)

re : fclean all
