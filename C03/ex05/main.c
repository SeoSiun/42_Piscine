#include <string.h>
#include <stdio.h>
#include "ft_strlcat.c"
int main()
{
	char a[10]="123";
	char b[]="456756";
	char a1[10]="123";
	char b1[]="456756";
	printf("%lu %d\n", strlcat(a,b,10), ft_strlcat(a1, b1, 10));
}
