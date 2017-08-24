/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 09:45:04 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/23 10:45:25 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	long nb_long;

	nb_long = (long)nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = -nb_long;
	}
	if (nb_long >= 10)
	{
		ft_putnbr(nb_long / 10);
	}
	ft_putchar(nb_long % 10 + 48);
}
