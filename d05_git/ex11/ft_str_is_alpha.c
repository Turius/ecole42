/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:13:01 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/08 16:56:15 by ltarchi          ###   ########.fr       */
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

int		ft_str_is_alpha(char *str)
{
	int n;

	n = 0;
	while (n <= ft_strlen(str) && str[n] != '\0')
	{
		if ((str[n] <= 90 && str[n] >= 65)
			|| (str[n] >= 97 && str[n] <= 122))
			n++;
		else
			break ;
	}
	if (n == ft_strlen(str))
		return (1);
	return (0);
}
