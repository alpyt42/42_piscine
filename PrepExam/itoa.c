/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:35:03 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/22 11:22:36 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nb, char *base)
{
	int		i;
	int		lbase;
	int		size;
	int		sign;
	char	temp;
	char	*res;
	int		nbr;

	i = 0;
	lbase = 0;
	sign = 1;
	size = 0;
	nbr = nb;
	while (base[lbase])
		lbase++;
	printf("%d /", lbase);
	if (nb < 0)
	{
		nb *= -1;
		nbr *= -1;
		sign = -1;
		size++;
	}
	printf("%d /", size);
	while (nb != 0)
	{
		nb = nb / lbase;
		size++;
	}
	printf("%d /",size);
	res = malloc(sizeof(char) * (size + 1));
	while (nbr != 0)
	{
		res[i] = base[nbr % lbase];
		nbr = nbr / lbase;
		i++;
	}
	if (sign == -1)
	{
		res[i] = '-';
		i++;
	}
	i = 0;
	while (i < size/2)
	{
		temp = res[i];
		res[i] = res[size - i - 1];
		res[size - i - 1] = temp;
		i++;
	}
	res[size] = '\0';
	return (res);
}

int	main(void)
{
	printf("%s",ft_itoa(-108, "0123456789abcdef"));
}
