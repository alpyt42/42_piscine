/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:41:34 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/27 18:25:44 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
typedef struct	Element Element;
struct	Element
{
	int large;
	int height;
	int	i;
	int j;
	int big_square;
	Element *next;
};

typedef struct Chara chara;
struct chara
{
	
}

int	ft_strlen(char *str, char *charset);
int	check_sep(char *charset, char c);
int	ft_nbr_str(char *str, char *charset);
int	*ft_string(char *buf, char *str, int len);
int	**ft_split(char *str, char *charset);
int	nbr_lign(char *tab);
int	ft_check_line(char *tab, char empty, char obstacle);
int check_first_line(char *buffer, char *empty, char *obstacle, char *full);
void	calc_square(int **map);
int	min(int l, int tl, int t);
#endif
