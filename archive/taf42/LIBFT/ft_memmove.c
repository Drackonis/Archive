/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:57:28 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 14:04:12 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	const uint8_t	*c1;
	uint8_t			*c2;
	uint8_t			*c3;

	i = 0;
	c1 = src;
	c2 = dest;
	if (!(c3 = malloc(sizeof(char) * n)))
		return (0);
	while (i < n)
	{
		c3[i] = c1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		c2[i] = c3[i];
		i++;
	}
	return (dest);
}
/*
**int	main(int argc, char **argv)
**{
**	argc++;
**	char *str1 = argv[1];
**	char *str2 = argv[2];
**	ft_memmove(str1, str2, 5);
**	printf("%s", str1);
**	return (0);
**}
*/
