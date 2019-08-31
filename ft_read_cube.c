/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_cube.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:43:13 by ukaron            #+#    #+#             */
/*   Updated: 2019/08/31 15:20:35 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"	

int	ft_error(char *str);

f_enter	ft_fenter(char **res, f_enter ff)
{
	int i;
	int j;

	j = 0;
	while (res[j] != '\0')
	{
		i = 0;
		while (res[j][i] != '\0')
		{
			if (res[j][i] == '#')
			{
				break;
			}
			i++;
		}
		if (res[j][i] == '#')
			break;
		j++;
	}
	ff.j = j;
	ff.i = i;
	return (ff);
}

int		ft_read_cube(char *res[50][5], char *argv, int *s)
{
	int	fd;
	int d;
	int c;
	f_enter	ff;
	char	*line;

	ff.i = 0;
	ff.j = 0;
	c = 0;
	d = 0;

	fd = open(argv, O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		if (line[0] != '\0')
		{
			res[c][d] = ft_strnew(ft_strlen(line));
			ft_strcpy(res[c][d], line);
			d++;
			if (d == 4)
			{	
				*s += 1;
				d = 0;
				ff = ft_fenter(res[c], ff);
				if (ft_valid(res[c], ff) != 6 && ft_valid(res[c], ff) != 8)
					return (ft_error("error"));
				c++;
			}
		}
	}
	close(fd);
	return (1);
}
