/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:56:39 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 14:03:34 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	uint8_t			*c1;
	const uint8_t	*c2;

	i = 0;
	c1 = dest;
	c2 = src;
	while (i < n)
	{
		c1[i] = c2[i];
		i++;
		if (c1[i - 1] == c)
			return (&c1[i]);
	}
	return (NULL);
}
/*
**int	main(int argc, char **argv)
**{
**	argc++;
**	char *str1 = argv[1];
**	char *str2 = argv[2];
**	ft_memccpy(str1, str2, 35, 5);
**	printf("%s",str1);
**	return (0);
**}
*/
