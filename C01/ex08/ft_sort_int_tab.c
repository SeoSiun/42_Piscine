/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:06:20 by siseo             #+#    #+#             */
/*   Updated: 2022/02/06 14:46:02 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < size)
	{
		j = i;
		tmp = tab[i];
		while (j > 0)
		{
			if (tab[j - 1] > tmp)
				tab[j] = tab[j - 1];
			else
				break ;
			j--;
		}
		tab[j] = tmp;
		i++;
	}
}
