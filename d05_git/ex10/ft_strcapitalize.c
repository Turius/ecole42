/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 07:14:29 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/09 18:12:54 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if (str[c] >= 'a' && str[c] <= 'z' && c == 0)
			str[c] = str[c] - 32;
		else if ((str[c] >= 'A' && str[c] <= 'Z') &&
				((str[c - 1] <= 'z' && str[c - 1] >= 'a') ||
				(str[c - 1] <= 'Z' && str[c - 1] >= 'A') ||
				(str[c - 1] <= '9' && str[c - 1] >= '0')))
			str[c] = str[c] + 32;
		else if ((str[c] <= 'z' && str[c] >= 'a') &&
				(str[c - 1] == 43 || str[c - 1] == 44 ||
				str[c - 1] == 45 || str[c - 1] == 59 ||
				str[c - 1] == 32))
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
