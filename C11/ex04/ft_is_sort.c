/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:07:52 by siseo             #+#    #+#             */
/*   Updated: 2022/02/21 15:56:37 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	asc;
	int	des;

	i = 0;
	asc = 0;
	des = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			des++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			asc++;
		i++;
	}
	if (asc == i || des == i)
		return (1);
	return (0);
}
