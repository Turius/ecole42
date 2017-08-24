/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:22:29 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/21 23:12:28 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char				*ft_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

char				*ft_strdup(char *str)
{
	char *dup;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dup == 0)
		return (0);
	dup = ft_strcpy(dup, str);
	return (dup);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			n;
	t_stock_par *stock;

	if (!(stock = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	n = 0;
	while (n < ac)
	{
		stock[n].size_param = ft_strlen(av[n]);
		stock[n].str = av[n];
		stock[n].copy = ft_strdup(av[n]);
		stock[n].tab = ft_split_whitespaces(av[n]);
		n++;
	}
	stock[n].str = 0;
	return (stock);
}
