/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trianglegen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:01:19 by nschwarz          #+#    #+#             */
/*   Updated: 2017/08/20 18:02:31 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int space;
	int rows;
	int k;

	k = 0;
	i = 1;
	if (argc != 2)
		return (0);
	rows = ft_atoi(argv[1]);
	while (i <= rows)
	{
		space = 1;
		while (space <= rows - i)
		{
			ft_putchar(' ');
			ft_putchar(' ');
			++space;
		}
		while (k != 2 * i - 1)
		{
			ft_putchar('*');
			ft_putchar(' ');
			++k;
		}
		ft_putchar('\n');
		++i;
		k = 0;
	}
	return (0);
}
