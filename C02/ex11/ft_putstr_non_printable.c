/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:33:37 by siseo             #+#    #+#             */
/*   Updated: 2022/02/08 18:04:18 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char_as_hex(char c)
{
	char	*hex_list;

	hex_list = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex_list[c>>4 & 15], 1);
	write(1, &hex_list[c & 15], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print_char_as_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
