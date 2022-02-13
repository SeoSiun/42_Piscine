/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kra>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:54:50 by siseo             #+#    #+#             */
/*   Updated: 2022/02/13 14:44:31 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_invalid(char *base, int *base_len)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i] == base[i + j])
				return (1);
			j++;
		}
		i++;
	}
	*base_len = i;
	return (0);
}

void	putnbr_base_recursive(unsigned int nbr, int base_len, char *base)
{
	if (nbr == 0)
		return ;
	putnbr_base_recursive(nbr / base_len, base_len, base);
	write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (is_invalid(base, &base_len))
		return ;
	if (nbr == 0)
		write(1, &base[0], 1);
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		putnbr_base_recursive(2147483648, base_len, base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	putnbr_base_recursive(nbr, base_len, base);
}
