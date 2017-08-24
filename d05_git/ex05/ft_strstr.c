/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 23:00:58 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/15 11:29:27 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_match(char *str, char *to_find)
{
	int c;

	c = 0;
	while (str[c] && to_find[c] && str[c] == to_find[c])
		c++;
	if (to_find[c] == '\0' && str[c - 1] == to_find[c - 1])
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int c;
	int check;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		check = ft_match(&str[c], to_find);
		if (check == 1)
			return (&str[c]);
		c++;
	}
	return ((void *)0);
}
