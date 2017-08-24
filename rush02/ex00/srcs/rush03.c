/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:21:43 by nschwarz          #+#    #+#             */
/*   Updated: 2017/08/20 22:21:45 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ENDOFLINE1 'C'
#define ENDOFLINE2 'C'
#define STARTOFLINE1 'A'
#define STARTOFLINE2 'A'
#define LIGN 'B'
#define SPACE ' '

void	ft_print_last_line03(int x, char *str, int c)
{
	int		a;
	char	tiret;

	a = 2;
	tiret = LIGN;
	str[c++] = STARTOFLINE2;
	while (a < x)
	{
		str[c++] = tiret;
		a++;
	}
	if (x > 1)
	{
		str[c++] = ENDOFLINE2;
	}
	str[c++] = '\n';
}

void	ft_inter_lines03(int x, char *str, int z)
{
	char	space;
	int		c;

	c = 2;
	space = SPACE;
	str[z++] = LIGN;
	while (c < x)
	{
		str[z++] = space;
		c++;
	}
	if (x > 1)
	{
		str[z++] = LIGN;
	}
	str[z++] = '\n';
}

void	ft_choose_inter_line_number03(int x, int y, char *str, int c)
{
	int		a;

	a = 2;
	if (y > 1)
	{
		while (a < y)
		{
			ft_inter_lines03(x, str, c);
			a++;
			c += x + 1;
		}
		ft_print_last_line03(x, str, c);
	}
}

void	ft_print_first_line03(int x, int y, char *str)
{
	int		a;
	char	tiret;
	int		c;

	c = 0;
	a = 2;
	tiret = LIGN;
	str[c++] = STARTOFLINE1;
	while (a < x)
	{
		str[c++] = tiret;
		a++;
	}
	if (x > 1)
	{
		str[c++] = ENDOFLINE1;
	}
	str[c++] = '\n';
	ft_choose_inter_line_number03(x, y, str, c);
}

char	*rush03(int x, int y)
{
	char *str;

	if (!(str = malloc((x + 1) * y * sizeof(char))))
		return (0);
	if (x > 0 & y > 0)
	{
		ft_print_first_line03(x, y, str);
	}
	else
	{
		if (x == 1 && y == 1)
		{
			str[0] = STARTOFLINE1;
		}
		else
		{
			str[0] = '\n';
		}
	}
	return (str);
}
