/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:17:06 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/24 13:56:57 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_char(char c)
{
	if (c == 32 || c == 9 || (c >= 11 && c <= 13))
		return (1);
	if (c == 10)
		return (2);
	if (c >= '0' && c <= '9')
		return (0);
	if (c <= 32 && c >= 127)
		return (-1);
	if (c >= 33 && c <= 126)
		return (3);
	return (-1);
}

int	dico_len_string(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (check_char(str[i]) == 0 && str[i])
		{
			len++;
			i++;
		}
		while ((check_char(str[i]) == 1 || str[i] == ':') && str[i])
		{
			if (str[i] == ':')
				len++;
			i++;
		}
		while (str[i] != '\n' && str[i])
		{
			len++;
			i++;
		}
		if (str[i] == '\n')
			len++;
		i++;
		}
		return (len);
}

char	*dico_full_string(char *str)
{
	int		i;
	int		j;
	int		len;
	char	*res;

	i = 0;
	j = 0;
	len = dico_len_string(str);
	res = malloc(sizeof(char) * (len + 1));
	while (str[i])
	{
		while (check_char(str[i]) == 0 && str[i])
			res[j++] = str[i++];
		while ((check_char(str[i]) == 1 || str[i] == ':') && str[i])
		{
			if (str[i] == ':')
				res[j++] = ':';
			i++;
		}
		while (str[i] != '\n' && str[i])
			res[j++] = str[i++];
		if (str[i] == '\n')
			res[j++] = ',';
		i++;
	}
	res[len] = '\0';
	return (res);
}
