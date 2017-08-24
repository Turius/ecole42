/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:39:56 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/21 23:18:03 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n])
		ft_putchar(str[n++]);
}

void	ft_putnbr(int nb)
{
	int n0;
	int n1;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		n0 = nb / 10;
		ft_putnbr(n0);
	}
	n1 = nb % 10;
	ft_putchar(n1 + 48);
}

void	ft_print_words_tables(char **tab)
{
	int n;

	n = 0;
	while (tab[n])
	{
		ft_putstr(tab[n]);
		ft_putchar('\n');
		n++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int n;

	n = 0;
	while (par[n].str != 0)
	{
		ft_putstr(par[n].str);
		ft_putchar('\n');
		ft_putnbr(par[n].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[n].tab);
		n++;
	}
}
