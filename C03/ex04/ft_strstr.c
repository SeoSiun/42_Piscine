/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kra>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:08:11 by siseo             #+#    #+#             */
/*   Updated: 2022/02/09 11:47:55 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	str_len;
	int	to_find_len;
	int	i;

	if (ft_strncmp(to_find, "", 0) == 0)
		return (str);
	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	i = 0;
	while (i < str_len - to_find_len)
	{
		if (ft_strncmp(&str[i], to_find, to_find_len - 1) == 0)
			return (&str[i]);
		i += to_find_len;
	}
	return (NULL);
}
