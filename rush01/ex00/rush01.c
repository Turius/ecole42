/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 10:31:45 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/13 21:41:33 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_check_line(int num, char **argv, int x, int y);
void	ft_display(char **argv);

int		verif(char **argv, int pos)
{
	int		x;
	int		y;
	char	num;

	num = '1';
	x = pos / 9 + 1;
	y = pos % 9;
	if (pos == 81)
		return (1);
	if (argv[x][y] != '.')
		return (verif(argv, pos + 1));
	while (num >= '1' && num <= '9')
	{
		if (ft_check_line(num, argv, x, y) == 1)
		{
			argv[x][y] = num;
			if (verif(argv, pos + 1) == 1)
				return (1);
		}
		num++;
	}
	argv[x][y] = '.';
	return (0);
}

int		erreur1(char **argv)
{
	int		l;
	int		c;
	int		compteur;

	l = 1;
	c = 0;
	compteur = 0;
	while (l < 10)
	{
		while (argv[l][c] != '\0')
		{
			compteur++;
			if (compteur > 9)
			{
				return (0);
			}
			c++;
		}
		c = 0;
		l++;
		compteur = 0;
	}
	return (1);
}

int		erreur2(char **argv)
{
	int		l;
	int		c;

	l = 1;
	c = 0;
	while (l < 10)
	{
		while (c < 9)
		{
			if ((argv[l][c] < '0' && argv[l][c] != '.') || argv[l][c] > '9')
			{
				return (0);
			}
			c++;
		}
		c = 0;
		l++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (erreur1(argv) == 0 || erreur2(argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argc == 10)
	{
		verif(argv, 0);
		if (verif(argv, 0) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		ft_display(argv);
	}
}
