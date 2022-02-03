/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:33:34 by siseo             #+#    #+#             */
/*   Updated: 2022/02/03 18:05:13 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	int_to_str(char* str_nbr, int nb)
{
	int i;

	i=14;
	while (nb != 0)
	{
		str_nbr[i] = nb % 10;
		i--;
		nb = nb / 10;
	}
	return i;
}

void	ft_putnbr(int nb)
{
	int	is_negative;
	int i;
	char	str_nbr[15];

	is_negative = 0;
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
	}
	i = int_to_str(str_nbr, nb);
	if (is_negative)
	{
		str_nbr[i] = '-';
	}
	write(1, str_nbr, 15);
}
