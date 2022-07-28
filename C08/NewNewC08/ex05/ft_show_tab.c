/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:02:39 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/28 11:41:44 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
		ft_putnbr(nbr);
	}
	else if (nbr < 10)
	{
		ft_putchar(nbr + 48);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

void	ft_putstring(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_putchar(tab[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstring(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstring(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
