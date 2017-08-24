/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achirat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:41:45 by achirat           #+#    #+#             */
/*   Updated: 2017/08/13 13:49:58 by achirat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_column(char num, char **argv, int y)
{
	int n;

	n = 1;
	while (n <= 9)
	{
		if (argv[n][y] == num)
			return (0);
		n++;
	}
	return (1);
}

int		ft_check_lin(char num, char **argv, int x)
{
	int c;

	c = 0;
	while (c < 9)
	{
		if (argv[x][c] == num)
			return (0);
		c++;
	}
	return (1);
}

int		ft_check_bloc(char num, char **argv, int x, int y)
{
	int x1;
	int y1;

	x1 = x - (x - 1) % 3;
	y1 = y - y % 3;
	x = x1;
	y = y1;
	while (x < x1 + 3)
	{
		y = y1;
		while (y < y1 + 3)
		{
			if (argv[x][y] == num)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int		ft_check_line(char num, char **argv, int x, int y)
{
	if (ft_check_column(num, argv, y) == 0)
		return (0);
	else if (ft_check_lin(num, argv, x) == 0)
		return (0);
	else if (ft_check_bloc(num, argv, x, y) == 0)
		return (0);
	else
		return (1);
}
