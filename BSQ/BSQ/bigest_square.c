/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigest_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:18:16 by amontalb          #+#    #+#             */
/*   Updated: 2022/07/26 13:41:49 by amontalb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void ft_bigest_square(char **tab, Element *element)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	element->big_square = 1
	element->i = 0
	element->j = 0
	while (y < height)
	{
		j = 1;
		while (x < large)
		{
			fonction de aldric (tab, i, j)
			if (tab[y][x] > element->big_square)
			{
				element->i = y;
				element->j = x;
				element->big_square = tab[y][x];
			}
			x++;
		}
		y++;
	}
}
