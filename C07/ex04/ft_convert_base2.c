/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:36:18 by siseo             #+#    #+#             */
/*   Updated: 2022/02/16 20:05:23 by siseo            ###   ########.fr       */
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
	*result = base[nbr % base_len];
}

int	_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	convert(int nbr, char *base, char *result, int size)
{
	if (nbr < 0)
	{
		result[0] = '-';
		if (nbr == -2147483648)
		{
			putnbr_base(2147483648, _strlen(base), base, &result[size - 1]);
			return ;
		}
		else
			nbr = -nbr;
	}
	putnbr_base(nbr, _strlen(base), base, &result[size - 1]);
}

char	*convert_base(int nbr, char *base)
{
	int		size;
	char	*result;

	size = get_len(nbr, _strlen(base));
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (0);
	if (nbr == 0)
		result[0] = base[0];
	else
		convert(nbr, base, result, size);
	result[size] = '\0';
	return (result);
}
