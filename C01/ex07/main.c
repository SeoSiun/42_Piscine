#include <stdio.h>
#include "ft_rev_int_tab.c"

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(arr, 5);
	
	int i=0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
