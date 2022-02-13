/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kra>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:27:46 by siseo             #+#    #+#             */
/*   Updated: 2022/02/13 14:38:40 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
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

int	convert_num(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_sign(char *str, int *i)
{
	int	sign;
	int	tmp;

	sign = 1;
	tmp = *i;
	while (str[tmp] == '+' || str[tmp] == '-')
	{
		if (str[tmp] == '-')
			sign *= -1;
		tmp++;
	}
	*i = tmp;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	i;
	int	sign;
	int	num;
	int	tmp_num;

	if (is_invalid(base, &base_len))
		return (0);
	i = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	sign = get_sign(str, &i);
	num = 0;
	tmp_num = convert_num(str[i], base);
	while (tmp_num != -1)
	{
		num *= base_len;
		num += tmp_num;
		i++;
		tmp_num = convert_num(str[i], base);
	}
	return (sign * num);
}
