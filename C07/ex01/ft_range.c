/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:40:56 by siseo             #+#    #+#             */
/*   Updated: 2022/02/16 19:38:29 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	result = malloc(sizeof(int) * size);
	if (!result)
		return (0);
	i = 0;
	while (i < size)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
