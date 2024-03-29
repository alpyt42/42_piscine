/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:45:16 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/28 18:39:21 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
				nb++;
		i++;
	}
	return (nb);
}
