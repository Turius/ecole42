/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:11:40 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/22 11:01:08 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		do_op(char **av)
{
	int n1;
	int n2;
	int result;

	n1 = ft_atoi(av[1]);
	n2 = ft_atoi(av[3]);
	result = 0;
	if (!ft_strcmp(av[2], "-"))
		ft_sub(n1, n2);
	else if (!ft_strcmp(av[2], "+"))
		ft_add(n1, n2);
	else if (!ft_strcmp(av[2], "*"))
		ft_mul(n1, n2);
	else if (!ft_strcmp(av[2], "/"))
		ft_div(n1, n2);
	else if (!ft_strcmp(av[2], "%"))
		ft_mod(n1, n2);
	else
		ft_usage();
	return (result);
}
