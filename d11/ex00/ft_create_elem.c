/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 12:14:52 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/23 15:58:02 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list)
	{
		list->next = NULL;
		list->data = data;
	}
	return (list);
}
