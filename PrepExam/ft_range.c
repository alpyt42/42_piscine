/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:35:36 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/22 13:11:30 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;
	int	len;

	i = 0;
	len = max - min;
	res = malloc(sizeof(int) * len);
	while (min < max)
		res[i++] = min++;
	return (res);
}
