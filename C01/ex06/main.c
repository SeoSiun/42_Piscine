#include <stdio.h>
#include "ft_strlen.c"

int main(void)
{
	printf("\"str\": %d\n",ft_strlen("str"));
	printf("\"\": %d\n", ft_strlen(""));
	printf("\"strlen\": %d\n", ft_strlen("strlen"));
}
