/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:21:56 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/27 11:06:50 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return ((void *)0);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
