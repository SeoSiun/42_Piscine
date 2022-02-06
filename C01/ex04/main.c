#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main(void)
{
	int a = 11;
	int b = 2;

	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("CALL: ft_ultimate_div_mod\n");
	printf("a: %d, b: %d\n", a, b);
}
