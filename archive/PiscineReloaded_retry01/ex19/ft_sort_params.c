/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:35:37 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/07 15:22:58 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int argc, char **argv)
{
	int	j;
	int	x;

	j = 0;
	x = 1;
	while (x < argc)
	{
		while (argv[x][j])
		{
			ft_putchar(argv[x][j]);
			j++;
		}
		x++;
		j = 0;
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		index;

	if (s1[0] == 0 && s2[0] == 0)
		return (0);
	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		x;
	char	*temp;

	i = 2;
	x = 1;
	j = 0;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], argv[i - 1]) < 0)
		{
			temp = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = temp;
			i = 2;
		}
		else
			i++;
	}
	ft_display(argc, argv);
	return (0);
}
