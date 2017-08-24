/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stdin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 19:13:02 by nschwarz          #+#    #+#             */
/*   Updated: 2017/08/20 23:28:43 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <unistd.h>

char	*get_stdin(void)
{
	int		ret;
	int		size;
	char	buf[BUF_SIZE + 1];
	char	*returned;
	char	tmp[1000000];

	size = 0;
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		size += ret;
		if (!(returned = (char*)malloc(sizeof(char) * size)))
			return (0);
		returned = ft_strcat(tmp, buf);
	}
	if (*returned == '\n')
		return ("46688");
	return (returned);
}
