/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:51:43 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/28 18:25:00 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort;

	i = 0;
	sort = 0;
	while (i < (length - 1) && sort == 0)
	{
		sort = (*f)(tab[i], tab[i + 1]);
		i++;
	}
	i = 0;
	while (i < (length - 1) && sort != 0)
	{
		if (sort * (*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
