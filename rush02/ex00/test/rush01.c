/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 16:29:44 by mle-gall          #+#    #+#             */
/*   Updated: 2017/08/20 18:12:21 by jayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_last_line(int x)
{
	int		a;
	char	tiret;

	a = 2;
	tiret = '*';
	ft_putchar(92);
	while (a < x)
	{
		ft_putchar(tiret);
		a++;
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	ft_inter_lines(int x)
{
	char	space;
	int		c;

	c = 2;
	space = ' ';
	ft_putchar('*');
	while (c < x)
	{
		ft_putchar(space);
		c++;
	}
	if (x > 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ft_choose_inter_line_number(int x, int y)
{
	int		a;

	a = 2;
	if (y > 1)
	{
		while (a < y)
		{
			ft_inter_lines(x);
			a++;
		}
		ft_print_last_line(x);
	}
}

void	ft_print_first_line(int x, int y)
{
	int		a;
	char	tiret;

	a = 2;
	tiret = '*';
	ft_putchar('/');
	while (a < x)
	{
		ft_putchar(tiret);
		a++;
	}
	if (x > 1)
	{
		ft_putchar(92);
	}
	ft_putchar('\n');
	ft_choose_inter_line_number(x, y);
}

void	rush(int x, int y)
{
	if (x > 0 & y > 0)
	{
		ft_print_first_line(x, y);
	}
	else
	{
		if (x == 1 && y == 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('\n');
		}
	}
}
