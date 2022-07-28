/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:04:22 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/22 10:23:55 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && check_sep(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_strlen_total(char *charset, char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] && check_sep(str[i], charset) == 0)
			nb++;
		while (str[i] && check_sep(str[i], charset) == 0)
			i++;
		while (str[i] && check_sep(str[i], charset) == 1)
			i++;
	}
	return (nb);
}

char	*put_string(char *str, int len)
{
	int		i;
	char	*tab;

	i = 0;
	tab = (char *)malloc(sizeof(char *) * (len + 1));
	while (i < len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (ft_strlen_total(charset, str) + 1));
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset) == 1)
			i++;
		if (str[i] && check_sep(str[i], charset) == 0)
		{
			res[j] = put_string(&str[i], ft_strlen(&str[i], charset));
			i += ft_strlen(&str[i], charset);
			j++;
		}
	}
	res[j] = ((void *)0);
	return (res);
}

#include <stdio.h>

int	main(void)
{
	char **res;
	res = ft_split("coucouclololl", "l");
	printf("%s", res[3]);
}
