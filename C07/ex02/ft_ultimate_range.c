/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:41:49 by siseo             #+#    #+#             */
/*   Updated: 2022/02/16 19:39:15 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (-1);
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}
