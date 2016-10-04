/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_aplha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:24:07 by hbouchet          #+#    #+#             */
/*   Updated: 2016/09/22 15:31:25 by hbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int ac, char **av)
{
    int i;
	int j;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = (int)av[1][i] - 'a';
				while (j >= 0)
				{
					ft_putchar(av[1][i]);
					j--;
				}
			}
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = (int)av[1][i] - 'A';
				while (j >= 0)
				{
					ft_putchar(av[1][i]);
					j--;
				}
			}
			else
				ft_putchar(av[1][i]);
            i++;
		}
    }
    ft_putchar('\n');
    return (0);
}

