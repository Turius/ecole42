/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 22:14:27 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/10 06:31:00 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int c;
	int length_dest;

	c = 0;
	length_dest = ft_strlen(dest);
	while (src[c] && c <= nb - 1)
	{
		dest[length_dest + c] = src[c];
		c++;
	}
	dest[length_dest + c] = '\0';
	return (dest);
}
