/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:21:02 by siseo             #+#    #+#             */
/*   Updated: 2022/02/15 13:35:36 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*convert_base(int nbr, char *base);

int	is_invalid(char *base)
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

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num;

	if (is_invalid(base_from) || is_invalid(base_to))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	return (convert_base(num, base_to));
}
