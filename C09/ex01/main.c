#include <stdio.h>

int main(void)
{
	int a = 1;
	int	b = 2;

	ft_putchar('a');
	ft_putstr("gogo");
	printf("\n%d\n", ft_strcmp("goto", "heaven"));
	printf("%d\n", ft_strlen("12345"));
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}
