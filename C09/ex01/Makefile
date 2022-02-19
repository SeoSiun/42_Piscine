CC = gcc
TARGET = libft.a
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = $(addprefix ./srcs/, $(SRC))
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rcs $@ $^
	
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $< -I./includes

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
