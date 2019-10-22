/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:43:10 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/07 15:23:39 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!(c = malloc(sizeof(*c) * (i * 1))))
		return (NULL);
	while (j < i)
	{
		c[j] = src[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
