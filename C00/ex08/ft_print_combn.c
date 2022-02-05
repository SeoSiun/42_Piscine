#include <unistd.h>
#include <stdio.h>

void	print_result(int n, char result[])
{
	int i;

	i = 0;
	write(1, result, n);
	while (i < n)
	{
		if (result[i] - '0'  != (10 - (n - i)))
		{
			write(1, ", ", 2);
			break;
		}
		i++;
	}
}

void	print_comb_recursive(int n, char result[], int index, int value)
{
	if (index == n)
	{
		print_result(n, result);
		return;
	}
	while (value <= (10 - (n -index)))
	{
		result[index] = value + '0';
		print_comb_recursive(n, result, index + 1, value + 1);
		value++;
	}
}

void	ft_print_combn(int n)
{
	char	result[10];

	print_comb_recursive(n, result, 0, 0);
}
