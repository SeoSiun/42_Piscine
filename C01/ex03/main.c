#include <stdio.h>
#include "ft_div_mod.c"

int main(void)
{
	int div;
	int mod;

	ft_div_mod(11, 2, &div, &mod);
	printf("11 div 2 = %d\n11 mod 2 = %d", div, mod);
}
