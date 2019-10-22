/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:58:48 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/23 13:48:49 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;
	unsigned int	l;
	const char		*src1;

	i = 0;
	l = 0;
	src1 = src;
	if (!src)
		return (NULL);
	while (src[l])
		l++;
	while (src[i])
	{
		if (i < len)
			dst[i] = src1[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
/*
**int	main(int argc, char **argv)
**{
**	argc++;
**	char *str1 = argv[1];
**	char *str2 = argv[2];
**	ft_strncpy(str1,str2,5);
**	printf("%s", str1);
**	return (0);
**}
*/
