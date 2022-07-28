/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:10:29 by ale-cont          #+#    #+#             */
/*   Updated: 2022/07/27 18:24:44 by ale-cont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_strlen_buf(char *map_name)
{
	int		fd;
	char	c;
	int		len;
	int		i;

	i = 1;
	len = 0;
	fd = open(map_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (i != 0)
	{
		i = read(fd, &c, 1);
		len++;
	}
	close(fd);
	return (len);
}

char	*map_str(char *map_name)
{
	int		fd;
	char	*buf;
	int		i;
	int		len;
	
	i = 1;
	len = ft_strlen_buf(map_name);
	if (len <= 0)
		return (NULL);
	buf = malloc(sizeof(char) * (len + 1));
	if (buf == NULL)
		return (0);
	fd = open(map_name,O_RDONLY);
	read(fd, buf, len);
	close(fd);
	return (buf);
}

void	display(int **map)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
			write(1, &map[i][j++], 1);
		write (1, "\n", 1);
		i++;
	}
}

int main (int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	int		**final_map;
	char	*res;
	int	len_lign;
	int	len_col;

	res = map_str(argv[1]);
	len_lign = nbr_lign(res);
	len_col = check_first_line(res, "","","");
	final_map = ft_split(res, "\n");
	calc_square(final_map);
	display(final_map);
	return 0;
}
