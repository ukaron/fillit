/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_feel_it.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:14:01 by ukaron            #+#    #+#             */
/*   Updated: 2019/08/31 15:33:37 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void ft_print_cube(char **cube);



t_map	*ft_feel_it(t_map *map, char **cube)
{
	int i;
	int j;
	t_map *new_map;

	new_map = ft_new_map(map->size);
	ft_memcpy((void*)new_map->map, (const void*)map->map, 8 * map->size);
	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (cube[i][j] != '\0')
		{
			if (cube[i][j] != '.')
			{
				new_map->map[i][j] = cube[i][j];
			}
			j++;
		}
		i++;
	}
	return (new_map);
}
