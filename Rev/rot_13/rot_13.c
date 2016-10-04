/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:57:52 by hbouchet          #+#    #+#             */
/*   Updated: 2016/09/22 14:18:51 by hbouchet         ###   ########.fr       */
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

    i = 0;
    if (ac == 2)
    {
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] < 'a' + 13)
				av[1][i] += 13;
			else if (av[1][i] >= 'a' + 13 && av[1][i] <= 'z')
				av[1][i] -= 13;
			else if (av[1][i] >= 'A' && av[1][i] < 'A' + 13)
				av[1][i] += 13;
			else if (av[1][i] >= 'A' + 13 && av[1][i] <= 'Z')
				av[1][i] -= 13;
			ft_putchar(av[1][i]);
			i++;
		}
    }
    ft_putchar('\n');
    return (0);
}
