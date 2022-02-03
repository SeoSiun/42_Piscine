/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:33:34 by siseo             #+#    #+#             */
/*   Updated: 2022/02/03 21:15:06 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_str(int nb, int is_negative)
{
	char	to_print;

	if (nb == 0)
	{
		if (is_negative)
			write(1, "-", 1);
		return ;
	}
	int_to_str(nb / 10, is_negative);
	to_print = (nb % 10) + '0';
	write(1, &to_print, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
			int_to_str(-nb, 1);
		else
			int_to_str(nb, 0);
	}
}
