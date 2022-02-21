/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:14:55 by siseo             #+#    #+#             */
/*   Updated: 2022/02/21 10:15:03 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (tab[i] != 0)
	{
		j = i;
		tmp = tab[i];
		while (j > 0)
		{
			if ((*cmp)(tab[j - 1], tmp) > 0)
				tab[j] = tab[j - 1];
			else
				break ;
			j--;
		}
		tab[j] = tmp;
		i++;
	}	
}
