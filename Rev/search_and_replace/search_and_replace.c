/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:20:33 by hbouchet          #+#    #+#             */
/*   Updated: 2016/09/22 15:21:59 by hbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int     main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 4 && !av[2][1] && !av[3][1])
    {
        while (av[1][i])
        {
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			i++;
        }
		ft_putstr(av[1]);
    }
    ft_putchar('\n');
    return (0);
}
