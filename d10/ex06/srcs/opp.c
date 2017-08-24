/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:26:35 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/23 10:50:36 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_sub(int n1, int n2)
{
	ft_putnbr(n1 - n2);
	ft_putchar('\n');
}

void	ft_add(int n1, int n2)
{
	ft_putnbr(n1 + n2);
	ft_putchar('\n');
}

void	ft_mul(int n1, int n2)
{
	int result;

	result = n1 * n2;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_div(int n1, int n2)
{
	if (n2 == 0)
	{
		ft_putstr("Stop : division by zero");
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr((int)n1 / n2);
		ft_putchar('\n');
	}
}

void	ft_mod(int n1, int n2)
{
	if (n2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(n1 % n2);
		ft_putchar('\n');
	}
}
