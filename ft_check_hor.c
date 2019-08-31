/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:54:47 by lrorscha          #+#    #+#             */
/*   Updated: 2019/07/18 22:23:32 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int ft_check_hor(char **cube, int max, int j)
{
	int i;
	int res;

	if (max == j)
	{
		j--;
		max = -1;
	}
	res = 0;
	while (j != max)
	{
		if (max == -1)
			i = 3;
		else
			i = 0;
		while (i != max)
		{
			if (cube[i][j] == '.')
			{
				if (max == -1)
					i--;
				else
					i++;
			}
			else
				return (res);
		}
		if (max == -1)
			j--;
		else
			j++;
		res++;
	}
	return (res);
}
