/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:38:00 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/27 12:32:03 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_strlen_total(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	return (total += ft_strlen(sep) * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	k = 0;
	i = 0;
	res = malloc(sizeof(char) * (ft_strlen_total(size, strs, sep) + 1));
	if (!res)
		return ((void *)0);
	while (k < ft_strlen_total(size, strs, sep))
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
		{
			while (sep[j])
				res[k++] = sep[j++];
			i++;
		}
	}
	res[k] = '\0';
	return (res);
}
