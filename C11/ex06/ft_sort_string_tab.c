/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:14:22 by siseo             #+#    #+#             */
/*   Updated: 2022/02/21 10:14:23 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[j - 1], tmp) > 0)
				tab[j] = tab[j - 1];
			else
				break ;
			j--;
		}
		tab[j] = tmp;
		i++;
	}	
}
