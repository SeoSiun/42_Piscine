/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:10:50 by siseo             #+#    #+#             */
/*   Updated: 2022/02/15 13:10:53 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	sort_argv(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 2;
	while (i < argc)
	{
		j = i;
		tmp = argv[i];
		while (j > 1)
		{
			if (ft_strcmp(argv[j - 1], tmp) > 0)
				argv[j] = argv[j - 1];
			else
				break ;
			j--;
		}
		argv[j] = tmp;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	sort_argv(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
