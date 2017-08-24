/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:13:58 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/08 20:14:44 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int		ft_str_is_printable(char *str)
{
	int y;

	y = 0;
	while (y <= ft_strlen(str) && str[y] >= 32)
		y++;
	if (y == ft_strlen(str) || !str[0])
		return (1);
	else
		return (0);
}
