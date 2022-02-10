#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	num;

	if(nb < 2)
		return (0);
	num = 2;
	while (num < nb)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}
