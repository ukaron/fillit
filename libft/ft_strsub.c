/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:41:19 by ukaron            #+#    #+#             */
/*   Updated: 2019/06/28 21:23:31 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ss;

	if (s == NULL)
		return (NULL);
	ss = ft_strnew(len + 1);
	if (ss == NULL)
		return (NULL);
	i = 0;
	while (len--)
		ss[i++] = s[start++];
	ss[i] = '\0';
	return (ss);
}
