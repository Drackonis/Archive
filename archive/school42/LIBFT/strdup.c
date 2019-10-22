/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:53:14 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/09 16:54:39 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	while (src[i])
		i++;
	if (!(c = malloc(sizeof(*c) * i)))
		return (NULL);
	j = 0;
	while (j < i)
	{
		c[j] = src[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
