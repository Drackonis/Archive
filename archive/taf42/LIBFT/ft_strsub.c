/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:59:34 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 14:07:22 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	char			*str;

	j = 0;
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	while (j < n)
	{
		str[j] = s[start + j];
		j++;
	}
	return (str);
}
/*
**int    main(int argc, char **argv)
**{
**       argc++;
**       char *str1 = argv[1];
**       char *str2 = argv[2];
**       str2 = ft_strsub(str1, 3, 5);
**       printf("%s", str2);
**       return (0);
**}
*/
