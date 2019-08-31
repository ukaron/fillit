/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:47:52 by lrorscha          #+#    #+#             */
/*   Updated: 2019/07/21 17:57:38 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_move(char **cube)
{
	int i;
	int j;
	int max;
	int left;
	int right;
	int up;
	int down;

	i = 0;
	max = 4;
	right = ft_check_hor(cube, max, max);
	left = ft_check_hor(cube, max, 0);
	down = ft_check_ver(cube, max, max);
	up = ft_check_ver(cube, max, 0);
	//printf("Left: %d, Right: %d, Up: %d, Down: %d\n", left, right, up, down);
	while (i != max)
	{
		j = 0;
		while (j != max)
		{
			if (cube[i][j] == '#')
			{
				cube[i][j] = '.';
				cube[i][j-left] = '#';
			}
			j++;
		}
		i++;
	}
	i = 0;
	/*while (i != max)
	{
		printf("%s\n", cube[i]);
		i++;
	}*/
}
