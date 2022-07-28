/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:32:59 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/26 13:51:41 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	check_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_nbr_str(char *str, char *charset)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (str[i])
	{
		while (check_sep(charset, str[i]) != 1)
			i++;
	}
	while (str[i])
	{
		if (check_sep(charset, str[i]) == 0 && str[i])
			nb++;
		while (check_sep(charset, str[i]) == 0 && str[i])
			i++;
		while (check_sep(charset, str[i]) == 1 && str[i])
			i++;
	}
	return (nb);
}

int	ft_strlen(char *str, char *charset)
{
	int	len;

	len = 0;
	while (check_sep(charset, str[len]) == 0 && str[len])
		len++;
	return (len);
}

int	*ft_string(char *buf, char *str, int len)
{
	int		i;
	int		*tab;
	char	empty;
	char	obstacle;
	char	full;
	int		height;

	i = 0;
	empty = 'y';
	obstacle = 't';
	full = 'h';
	height = check_first_line(buf, &empty, &obstacle, &full);
	tab = (int *)malloc(sizeof(int) * (len));
	while (i < len && str[i])
	{
		if (str[i] == obstacle)
			tab[i] = 0;
		if (str[i] == empty)
			tab[i] = 1;
		i++;
	}
	return (tab);
}

int	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int	**split;

	i = 0;
	j = 0;
	split = (int **)malloc(sizeof(int *) * (ft_nbr_str(str, charset)));
	if (!split)
		return ((void *)0);
	while (check_sep(charset, str[i]) != 1)
			i++;
	while (str[i])
	{
		while (str[i] && check_sep(charset, str[i]) == 1)
			i++;
		if (str[i])
		{
			split[j] = ft_string(str, &str[i], ft_strlen(&str[i], charset));
			i += ft_strlen(&str[i], charset);
			j++;
		}
	}
	return (split);
}
