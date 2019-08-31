/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:54:47 by lrorscha          #+#    #+#             */
/*   Updated: 2019/07/18 20:11:33 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int ft_move_check(char **cube, int max)
{
	int i;
	int j;
	int res;

	res = 0;
	j = 0;
	while (j != max)
	{
		i = 0;
		while (i != max)
		{
			if (cube[i][j] == '.')
				i++;
			else
				return (res);
		}
		res++;
		j++;
	}
	return (res);
}
