/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:51:49 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/24 03:44:15 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <stdio.h>

void	check_argv(char **argv)
{
	int		i;
	char	number[1000];
	int		number_count;

	i = 0;
	number_count = 0;
	while (argv[1][i] == '0')
		i++;
	if (argv[1][i] == '\0')
	{
		number[number_count] = '0';
		number_count++;
	}
	while (argv[1][i] != '\0')
	{
		number[number_count] = argv[1][i];
		i++;
		number_count++;
	}
}
