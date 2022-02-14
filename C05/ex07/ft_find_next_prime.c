/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:01:41 by siseo             #+#    #+#             */
/*   Updated: 2022/02/14 12:07:47 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_ft_is_prime(int nb)
{
	long long	num;

	if (nb < 2)
		return (0);
	num = 2;
	while (num * num <= nb)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!_ft_is_prime(nb))
		nb++;
	return (nb);
}
