/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:13:36 by ukaron            #+#    #+#             */
/*   Updated: 2019/08/31 15:25:50 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


t_map	*ft_new_map(int s)
{
	int i;
	int j;
	t_map *map;

	map = (t_map*)malloc(sizeof(t_map));
	map->size = s;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < s)
		{
			map->map[i][j] = '.';
			j++;
		}
		i++;
	}
	map->next = NULL;
	return (map);
}
