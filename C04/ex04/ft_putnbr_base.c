#include <unistd.h>

int	_ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

void	putnbr_base_recursive(int nbr, int base, char *digits)
{
	if (nbr / base == 0)
		return ;
	putnbr_base_recursive(nbr / base, base, digits);
	write(1, &digits[nbr % base], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	putnbr_base_recursive(nbr, _ft_strlen(base), base);
}

