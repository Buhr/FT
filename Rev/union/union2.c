/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 23:13:07 by hbouchet          #+#    #+#             */
/*   Updated: 2016/09/20 01:06:58 by hbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_cmp(char c, char *str, int index)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c )
			break ;
		i++;
	}
	if (i == index)
		ft_putchar(str[i]);
	return (0);
}
void           ft_union(char *str1, char *str2)
{
	int     tab[128] = {0};
	int     i;

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
	i = 0;
	while (str2[i])
	{
		if (tab[(int)str2[i]] == 0)
		{
			tab[(int)str2[i]] = 1;
			ft_putchar(str2[i]);
		}
		i++;
	}
}
/*
void	ft_union(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	while (str1[i] != '\0')
	{
		ft_cmp(str1[i], str1, i);
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		j = 0;
		while (str1[j])
		{
			if (str2[i] == str1[j])
				break ;
			j++;
		}
		if (!str1[j])
			ft_cmp(str2[i], str2, i);
		i++;
	}
}*/

int		main(int ac, char **av)
{
	
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
