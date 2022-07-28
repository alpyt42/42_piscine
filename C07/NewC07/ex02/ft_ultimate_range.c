/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:07:44 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/27 11:10:13 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(sizeof(int) * len);
	if (!range)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (len);
}
