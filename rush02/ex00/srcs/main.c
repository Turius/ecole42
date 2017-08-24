/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:53:34 by jayache           #+#    #+#             */
/*   Updated: 2017/08/20 23:20:57 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int		g_found = 0;

void	put_rush(char *str, int x, int y)
{
	if (g_found > 0)
		ft_putstr(" || ");
	ft_putstr(str);
	ft_putstr(" [");
	ft_putnbr(x);
	ft_putstr("]");
	y != 0 ? ft_putstr(" [") : 0;
	y != 0 ? ft_putnbr(y) : 0;
	y != 0 ? ft_putstr("]") : 0;
	g_found++;
}

int		sastantua_size(int y)
{
	int i;

	i = 0;
	while (y > 0)
	{
		i++;
		y -= (4 + i);
	}
	return (i - 1);
}

int		main(void)
{
	char	*str;
	int		x;
	int		y;
	int		c;

	c = 15;
	str = get_stdin();
	y = ft_strlen_y(str);
	x = ft_strlen_x(str);
	if (!ft_strcmp(str, rush00(x, y)))
		put_rush("[colle-00]", x, y);
	if (!ft_strcmp(str, rush01(x, y)))
		put_rush("[colle-01]", x, y);
	if (!ft_strcmp(str, rush02(x, y)))
		put_rush("[colle-02]", x, y);
	if (!ft_strcmp(str, rush03(x, y)))
		put_rush("[colle-03]", x, y);
	if (!ft_strcmp(str, rush04(x, y)))
		put_rush("[colle-04]", x, y);
	if (!g_found)
		write(1, "aucune", 6);
	write(1, "\n", 1);
}
