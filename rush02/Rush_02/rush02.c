/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:11:53 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/24 21:12:58 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*create_char(char *str)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	while (str[len] != ':' && str[len] != ',')
		len++;
	res = malloc(sizeof(char) * (len + 1));
	while (str[i] != ':' && str[i] != ',')
	{
		res[i] = str[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*dico_nbr(char *str)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	while(str[len] != ',')
		len++;
	if(len == 0)
		return (NULL);
	res = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	return (res);

}

char	*dico_word(char *str)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	while (str[len] != ',')
		len++;
	if (len == 0)
		return (NULL);
	res = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

void	create_dico(char *str, List *myList)
{
	int		i;
	char	*nb;
	char	*word;

	i = 0;
	while (str[i])
	{
		nb = create_char(&str[i]);
		i += ft_strlen(nb);
		while (str[i] == ':' && str[i])
			i++;
		word = create_char(&str[i]);
		i += ft_strlen(word);
		while (str[i] == ',' && str[i])
			i++;
		if (nb != NULL && word != NULL)
			insert(myList, nb, word);
	}
}

int main (int argc, char *argv[])
{
	(void) argc;
	List *myList = init();

	int		fd;
	char	buf[1000];

	fd = open("numbers.dict.txt", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	read(fd, buf, 1000);
	close(fd);
	create_dico(dico_full_string(buf), myList);
	//printf("%s \n",buf);
    //display(myList);
	printf("\n%s\n", search(myList,argv[1]));
	supp(myList);
	//display(myList);
	return 0;
}
