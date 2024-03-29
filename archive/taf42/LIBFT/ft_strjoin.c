/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:58:17 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 14:05:47 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static void		set_to_zero(int *i1, int *i2)
{
	*i1 = 0;
	*i2 = 0;
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	set_to_zero(&i, &j);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!(str = (char*)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	set_to_zero(&i, &j);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j + 1] = '\0';
	return (str);
}
/*
**int    main(int argc, char **argv)
**{	argc++;
**	char *str1 = argv[1];
**	char *str2 = argv[2];
**	str1 = ft_strjoin(str1, str2);
**	printf("%s", str1);
**	return (0);
**}
*/
