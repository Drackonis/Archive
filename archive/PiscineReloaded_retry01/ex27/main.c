/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:50:06 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/07 15:26:08 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_put_error(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display(char *av)
{
	int		i;
	int		j;
	char	tab[BUFF_SIZE + 1];

	i = open(av, O_RDONLY);
	if (i == -1)
		return ;
	while ((j = read(i, tab, BUFF_SIZE)))
	{
		tab[j] = '\0';
		ft_putstr(tab);
	}
	close(i);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_put_error("File name missing.\n");
	else if (ac > 2)
		ft_put_error("Too many arguments.\n");
	else
		ft_display(av[1]);
	return (0);
}
