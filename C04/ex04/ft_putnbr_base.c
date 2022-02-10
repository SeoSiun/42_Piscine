#include <unistd.h>

int	_ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

int	is_invalid(char *base)
{
	int	i;
	int	j;

	if (_ft_strlen(base) == 0 || _ft_strlen(base) == 1)
		return 1;
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return 1;
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i] == base[i + j])
				return 1;
			j++;
		}
		i++;
	}
	return 0;
}

void	putnbr_base_recursive(unsigned int nbr, int base, char *digits)
{
	if (nbr == 0)
		return ;
	putnbr_base_recursive(nbr / base, base, digits);
	write(1, &digits[nbr % base], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	num;

	if(is_invalid(base))
		return ;
	if (nbr == 0)
		write(1, &base[0], 1);
	if (nbr < 0)
	{
		num = -nbr;
		write(1, "-", 1);
	}
	putnbr_base_recursive(nbr, _ft_strlen(base), base);
}
