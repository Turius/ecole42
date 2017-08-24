/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 06:40:02 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/10 06:42:19 by ltarchi          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int c;
	int length_dest;

	c = 0;
	length_dest = ft_strlen(dest);
	while (src[c] != '\0')
	{
		dest[length_dest + c] = src[c];
		c++;
	}
	dest[length_dest + c] = '\0';
	return (dest);
}
