/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:57:56 by amontalb          #+#    #+#             */
/*   Updated: 2022/07/26 14:47:31 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int check_first_line(char *buffer, char *empty, char *obstacle, char *full)
{
	int	i;
	int nbr;
	int	j;

	nbr = 0;
	i = 0;
	j = 0;
	while (buffer[i] != '\n')
		i++;
	i--;
	*full = buffer[i];
	i--;
	*obstacle = buffer[i];
	i--;
	*empty = buffer[i];

	while (j < i)
	{
		if (buffer[j] > '9' || buffer[j] < '0')
			return (-1);
		nbr = nbr * 10 + ( buffer[j] - '0');
		j++;
	}
	if (*full == *obstacle || *full == *empty || *empty == *obstacle)
		return (-1);
	return (nbr);
}

int	ft_check_line(char *tab, char empty, char obstacle)
{
	int	i;
	int	size_line1;
	int	size_line;

	i = 1;
	size_line1 = 0;
	while (tab[i] != '\n')
		size_line1 ++;
	while (tab[i])
	{
		size_line = 0;
		while (tab[i] != '\n')
		{
			if (tab[i] != empty && tab[i] != obstacle)
				return (0);
			size_line ++;
			i++;
		}
		if (size_line != size_line1)
			return (0);
		i++;
	}
	return (1);
}

int	nbr_lign(char *tab)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (tab[i])
	{
		if(tab[i] == '\n')
			nbr ++;	
		i++;	
	}
	return (nbr - 1);
}
