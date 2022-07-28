/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:10:19 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/26 14:04:11 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	calc_square(int **map)
{
	int	i;
	int	j;

	i = 1;
	while (map[i])
	{
		j = 1;
		while (map[i][j])
		{
			if (map[i][j] != '0')
				map[i][j] = min(map[i][j - 1], map[i - 1][j - 1], map[i - 1][j]) + 1;
			j++;
		}
		i++;
	}
}

int	min(int l, int tl, int t)
{
	if (l < tl && l < t)
		return (l);
	if (tl < l && tl < l)
		return (tl);
	if (t < tl && t < l)
		return (t);
	if (l < tl && tl == t)
			return (l);
	if (tl < l && l == t)
		return (tl);
	if (t < l && l == tl)
		return (t);
	if (t == tl && tl == l)
		return (l);
	return (-1);
}
