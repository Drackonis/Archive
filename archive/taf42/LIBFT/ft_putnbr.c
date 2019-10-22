/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:35:12 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/21 15:39:33 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	int		nb;
	int		t;
	char	c;

	nb = n;
	t = 0;
	if (nb < 0)
	{
		c = '-';
		write(1, &c, 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		t = nb % 10;
		c = t + 48;
		ft_putnbr(nb / 10);
	}
	else
		c = nb + 48;
	write(1, &c, 1);
}
/*
**int	main(void)
**{
**	ft_putnbr(-2147483648);
**	return (0);
**}
*/
