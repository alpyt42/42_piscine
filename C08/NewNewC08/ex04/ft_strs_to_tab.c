/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:36:02 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/28 08:27:15 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*tab;
	char	*ptr;

	len = 0;
	while (src[len])
		len++;
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	ptr = tab;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (tab);
}

int	ft_strlen(char *av)
{
	int	len;

	len = 0;
	while (av[len])
		len++;
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (!stock)
		return (0);
	while (i < ac && av[i])
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
