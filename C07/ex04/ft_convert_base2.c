/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:36:18 by siseo             #+#    #+#             */
/*   Updated: 2022/02/15 13:36:21 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(int nbr, int base_len)
{
	int	len;

	len = 1;
	while (nbr / base_len != 0)
	{
		nbr /= base_len;
		len++;
	}
	if (nbr < 0)
		len++;
	return (len);
}

void	putnbr_base(unsigned int nbr, int base_len, char *base, char *result)
{
	if (nbr == 0)
		return ;
	putnbr_base(nbr / base_len, base_len, base, result - 1);
	result[0] = base[nbr % base_len];
}

char	*convert_base(int nbr, char *base)
{
	int	size;
	int	base_len;
	char	*result;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	size = get_len(nbr, base_len);
	result = malloc(sizeof(char) * (size + 1));
	if (nbr == 0)
		result[0] = base[0];
	else
	{
		if (nbr < 0)
		{
			result[0] = '-';
			if (nbr == -2147483648)
			{
				putnbr_base(2147483648, base_len, base, &result[size - 1]);
				result[size] = '\0';
				return (result);
			}
			else
				nbr = -nbr;
		}
		putnbr_base(nbr, base_len, base, &result[size - 1]);
	}
	result[size] = '\0';
	return (result);
}
