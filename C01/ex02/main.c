#include <stdio.h>
#include "ft_swap.c"

int main(void)
{
	int a, b;
	
	a = 10;
	b = 20;

	printf("a: %d, b: %d\n", a, b);
	printf("CALL: ft_swap\n");
	ft_swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);
}
