/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 19:20:21 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/20 19:33:08 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *array;
	int n;

	n = 0;
	array = (int *)malloc(sizeof(int) * (length));
	while (n < length)
	{
		array[n] = f(tab[n]);
		n++;
	}
	return (array);
}
