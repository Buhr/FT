/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 12:20:20 by hbouchet          #+#    #+#             */
/*   Updated: 2016/09/04 17:38:34 by hbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		base_len(int size)
{
	int a;

	if (size == 1)
	{
		return (7);
	}
	a = base_len(size - 1) + (size / 2) * 2 + 2 + (size + 2) *2;
	return (a);
}

void	sastantua(int size)
{
	int espace;
	int i;
	int ligne;
	int etage;

	etage = 1;
	ligne = 1;
	espace = (base_len(size) - 3) / 2;
	
	while (ligne <= etage +2)
	{
		ligne++;
		i = 0;
		while (i < espace)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('/');
		i = 0;
		while (i < ligne )
		{
			i++;
			ft_putchar("*");
		}
	}
}

int		main(void)
{
	sastantua(2);
	
	return (0);
}
