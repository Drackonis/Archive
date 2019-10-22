/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:53:22 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 14:05:53 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
**int	main(int argc, char **argv)
**{
**	int	i;
**	i = 0;
**	argc++;
**	char *str1 = argv[1];
**	i = ft_strlen(str1);
**	printf("%d", i);
**	return (0);
**}
*/
