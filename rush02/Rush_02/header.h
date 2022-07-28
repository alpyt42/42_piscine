/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:41:34 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/24 15:45:06 by ale-cont         ###   ########lyon.fr   */
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
	char *number;
	char *wordn;
	Element *next;
};

typedef struct	List List;
struct	List
{
	Element *first;
};
char	*dico_full_string(char *str);
int		dico_len_string(char *str);
char	*dico_word(char *str);
char	*dico_nbr(char *str);
int		check_char(char c);
void	display(List *list);
void	supp(List *list);
char	*search(List *list,char *nb);
void	insert(List *list, char *nvNbr, char *nvWord);
List 	*init();

#endif
