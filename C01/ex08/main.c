#include <stdio.h>
#include "ft_sort_int_tab.c"

int main(void)
{
	int i=0;
	int arr[5] = {4, 2, 3, 5, 1};

	ft_sort_int_tab(arr, 5);
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
