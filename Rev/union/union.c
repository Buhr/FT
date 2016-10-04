/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 23:13:07 by hbouchet          #+#    #+#             */
/*   Updated: 2016/09/20 01:19:05 by hbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_union(char *str1, char *str2)
{
	int	tab[128];
	int	i;

	i = -1;
	while (++i < 128)
		tab[i] = 0;
	i = 0;
	while (str1[i])
	{
		if (tab[(int)str1[i]] == 0)
		{
			tab[(int)str1[i]] = 1;
			ft_putchar(str1[i]);
		}
		i++;
	}
	i = -1;
	while (str2[++i])
	{
		if (tab[(int)str2[i]] == 0)
		{
			tab[(int)str2[i]] = 1;
			ft_putchar(str2[i]);
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
