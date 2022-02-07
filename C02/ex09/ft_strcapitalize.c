/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:07:09 by siseo             #+#    #+#             */
/*   Updated: 2022/02/07 19:16:49 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	int	is_alpha;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		is_alpha = 1;
	else
		is_alpha = 0;
	return (is_alpha);
}

char	*ft_strcapitalize(char *str)
{
	int	is_first;
	int	i;
	int	offset;

	is_first = 1;
	i = 0;
	offset = 'a' - 'A';
	while (str[i] != '\0')
	{
		if (is_first == 1)
		{
			is_first = 0;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - offset;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + offset;
		if ((str[i] < '0' || str[i] > '9') && !ft_is_alpha(str[i]))
			is_first = 1;
		i++;
	}
	return (str);
}
