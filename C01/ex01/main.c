#include <stdio.h>
#include "ft_ultimate_ft.c"

int main(void)
{
	int a = 20;
	int *pa = &a;
	int **p2a = &pa;
	int ***p3a = &p2a;
	int ****p4a = &p3a;
	int *****p5a = &p4a;
	int ******p6a = &p5a;
	int *******p7a = &p6a;
	int ********p8a = &p7a;

	ft_ultimate_ft(&p8a);
	printf("%d\n", a);
}
