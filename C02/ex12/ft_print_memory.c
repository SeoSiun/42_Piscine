/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:44:47 by siseo             #+#    #+#             */
/*   Updated: 2022/02/07 19:44:50 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex_addr(unsigned int addr)
{
	char	hex_addr[16];
	int		i;
	char	*hex_list;

	hex_list = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		hex_addr[15 - i] = hex_list[addr % 16];
		addr /= 16;
		i++;
	}
	write(1, hex_addr, 16);
}

void	print_content_as_hex(char *addr, char *final)
{
	char			*hex_list;
	unsigned int	i;
	int				is_end;

	hex_list = "0123456789abcdef";
	i = 0;
	is_end = 0;
	while (i < 16)
	{
		if (is_end)
			write(1, "  ", 2);
		else
		{
			write(1, &hex_list[addr[i] / 16], 1);
			write(1, &hex_list[addr[i] % 16], 1);
			if (addr + i + 1 == final)
				is_end = 1;
		}
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	print_content(char *addr, char *final)
{
	int	i;

	i = 0;
	while (i < 16 && addr + i < final)
	{
		if (addr[i] < 32 || addr[i] > 126)
			write(1, ".", 1);
		else
			write(1, &addr[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*addr_to_print;

	addr_to_print = (char *)addr;
	while ((void *)addr_to_print < addr + size)
	{
		print_hex_addr((unsigned int)addr_to_print);
		write(1, ": ", 2);
		print_content_as_hex(addr_to_print, addr + size);
		print_content(addr_to_print, addr + size);
		write(1, "\n", 1);
		addr_to_print += 16;
	}
	return (addr);
}
