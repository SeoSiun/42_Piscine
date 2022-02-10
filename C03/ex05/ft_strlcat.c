/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kra>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:07:43 by siseo             #+#    #+#             */
/*   Updated: 2022/02/10 10:48:35 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	if (size != 0 && dest_len < size)
	{
		while (src[i] != '\0' && i < size - dest_len - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		return (dest_len + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
