/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:42:15 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/23 21:59:52 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	check_argv1(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
			return (-1);
		i++;
	}
	return (1);
}

int	check_argv2(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))	
			return (-1);
		i++;
	}
	return (2);
}

int	check_errors(int args, char **argv)
{
	if (args == 2)
		return (check_argv1(argv));
	if (args == 3)
		return (check_argv2(argv));
	else
		return (-1);
}
