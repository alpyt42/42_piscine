/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:18:46 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/28 18:31:44 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int	error(char c, int nb)
{
	if (c == '%' && nb == 0)
	{
		ft_putstring("Stop : modulo by zero");
		return (0);
	}
	if (c == '/' && nb == 0)
	{
		ft_putstring("Stop : division by zero");
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	(*fct_list[5])(int, int);
	int	res;

	fct_list[0] = add;
	fct_list[1] = diff;
	fct_list[2] = div;
	fct_list[3] = mod;
	fct_list[4] = mul;
	res = 0;
	if (argc != 4)
		return (0);
	if (error(argv[2][0], atoi(argv[3])) == 0)
		return (0);
	if (argv[2][0] == '+')
		res = (*fct_list[0])(atoi(argv[1]), atoi(argv[3]));
	if (argv[2][0] == '-')
		res = (*fct_list[1])(atoi(argv[1]), atoi(argv[3]));
	if (argv[2][0] == '/' && atoi(argv[3]) != 0)
		res = (*fct_list[2])(atoi(argv[1]), atoi(argv[3]));
	if (argv[2][0] == '%' && atoi(argv[3]) != 0)
		res = (*fct_list[3])(atoi(argv[1]), atoi(argv[3]));
	if (argv[2][0] == '*' && atoi(argv[3]) != 0)
		res = (*fct_list[4])(atoi(argv[1]), atoi(argv[3]));
	putnbr(res);
	return (0);
}
