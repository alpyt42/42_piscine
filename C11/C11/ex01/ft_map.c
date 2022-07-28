/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:01:56 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/28 18:36:39 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = malloc(sizeof(int) * length);
	if (!res)
		return (NULL);
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}
