/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:11:38 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/22 13:54:25 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_strlen_total(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	len += (i - 1) * ft_strlen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		l;
	int		k;
	char	*res;
	int		len;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	len = 0;
	if (size == 0)
	{
		res = malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * (ft_strlen_total(size, strs, sep) + 1));
	while (i < size)
	{
		j = 0;
		l = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		if (i < size - 1)
		{
			while (sep[l])
				res[k++] = sep[l++];
		}
		i++;
	}
	res[ft_strlen_total(size, strs, sep)] = '\0';
	return (res);
}

#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"coucou","poulet"};
	int		size = 2;
	char	*sep = "yo";
	printf("%s", ft_strjoin(size, strs, sep));

}

