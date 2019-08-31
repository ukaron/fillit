/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:55:01 by lrorscha          #+#    #+#             */
/*   Updated: 2019/08/31 15:33:17 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_error(char *str)
{
	ft_putendl(str);
	return (-1);
}

int	main(int argc, char **argv)
{
	int c;
	char	*res[50][5];
	t_map *map;
	int size;
	int *s;

	size = 0;
	s = &size;
	if (argc != 2)
		return (ft_error("error"));
	if (ft_read_cube(res, argv[1], s) != 1)
		return(-1);
	c = 0;
	map = ft_new_map(4);
	while (c < size)
	{
		ft_cube_abc(res[c], c);
		map = ft_feel_it(map, res[c]);
		ft_putchar('\n');
		ft_print_map(map);
		ft_putchar('\n');
		c++;
	}
	ft_print_map(map);
	return (0);
}
