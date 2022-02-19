#include <unistd.h>

void	ft_putnbr(int nbr);

void	add(int a, int b)
{
	ft_putnbr(a + b);
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(a / b);
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
}
void	mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(a / b);	
}
