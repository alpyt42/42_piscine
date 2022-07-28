/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_struc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:33:13 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/24 16:02:08 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


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

List *init()
{
	List *list = malloc(sizeof(*list));
	Element *element = malloc(sizeof(*element));
	if (list == NULL || element == NULL)
		return ((void *)0);
	element->number = "-1";
	element->wordn = (void *)0;
	element->next = NULL;
	list->first = element;
	return (list);
}

void	insert(List *list, char *nvNbr, char *nvWord)
{
	Element *new = malloc(sizeof(*new));
	if (list == NULL || new == NULL)
		exit(EXIT_FAILURE);
	new->number = nvNbr;
	new->wordn = nvWord;
	new->next = list->first;
	list->first = new;
}

void	supp(List *list)
{
	if (list == NULL)
		exit(EXIT_FAILURE);
	if (list->first != NULL)
	{
		Element *tosupp = list->first;;
		while (tosupp != NULL)
		{
			list->first = list->first->next;
			free(tosupp);
			tosupp = list->first;
		}
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	temp = s1[i] - s2[i];
	return (temp);
}

char	*search(List *list, char *nb)
{
	if(list == NULL || nb == NULL)
		exit(EXIT_FAILURE);
	Element *search = list->first;
	while (search != NULL)
	{
		if (ft_strcmp(search->number, nb) == 0)
			return (search->wordn);
		search = search->next;
	}
	return (NULL);
}

void	display(List *list)
{
	if (list == NULL)
		exit(EXIT_FAILURE);
	Element *actual = list->first;
	while (actual != NULL)
	{
		printf("%s<=>%s - ", actual->number, actual->wordn);
		actual = actual->next;
	}
	printf("NULL\n");
}
