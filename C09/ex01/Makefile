CC = gcc
NAME = libft.a
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = $(addprefix ./srcs/, $(SRC))
OBJS = $(SRCS:.c=.o)
HEADERS = ./includes/ft.h
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(HEADERS) $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< -I./includes/

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
