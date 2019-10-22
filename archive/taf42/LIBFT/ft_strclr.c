/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:57:47 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 14:04:50 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
/*
**int	main(int argc, char **argv)
**{
**	argc++;
**	char	*str1 = argv[1];
**	ft_strclr(str1);
**	printf("%s", str1);
**	return (0);
**}
*/
