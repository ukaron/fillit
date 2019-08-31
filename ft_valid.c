/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch_tetr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:58:29 by ukaron            #+#    #+#             */
/*   Updated: 2019/07/28 16:55:56 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_valid(char **cube, f_enter ff)
{
	int	res;

	res = 0;
	if (ff.i == 4 && ff.j == 3 )
		return (0);
	if (cube[ff.j][ff.i] == '#')
	{
		if ((ff.i > 0 && ff.j >= 0) && cube[ff.j][ff.i - 1] == '#')
			res++;
		if ((ff.i < 3 && ff.j < 4) && cube[ff.j][ff.i + 1] == '#')
			res++;
		if ((ff.i >= 0 && ff.j > 0) && cube[ff.j - 1][ff.i] == '#')
			res++;
		if ((ff.i <= 4 && ff.j < 3) && cube[ff.j + 1][ff.i] == '#')
			res++;
	}
	ff.i++;
	if (ff.i == 4 && ff.j < 3)
	{
		ff.i = 0;
		ff.j++;
	}
	return (res + ft_valid(cube, ff));
}
