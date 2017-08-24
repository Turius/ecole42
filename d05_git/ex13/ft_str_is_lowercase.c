/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:09:46 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/08 20:11:24 by ltarchi          ###   ########.fr       */
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

int		ft_str_is_lowercase(char *str)
{
	int y;

	y = 0;
	while (y <= ft_strlen(str) && str[y] >= 97 && str[y] <= 122)
		y++;
	if (y == ft_strlen(str) || !str[0])
		return (1);
	else
		return (0);
}
