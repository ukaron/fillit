/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:33:48 by lrorscha          #+#    #+#             */
/*   Updated: 2019/07/18 22:51:30 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_check_ver(char **cube, int max, int i)
{
	int j;
	int res;

	if (max == i)
	{
		i--;
		max = -1;
	}
	res = 0;
	while (i != max)
	{
		if (max == -1)
			j = 3;
		else
			j = 0;
		while (j != max)
		{
			if (cube[i][j] == '.')
			{
				if (max == -1)
					j--;
				else
					j++;
			}
			else
				return (res);
		}
		if (max == -1)
			i--;
		else
			i++;
		res++;
	}
	return (res);
}
