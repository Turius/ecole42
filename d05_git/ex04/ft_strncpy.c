/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 02:04:24 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/15 18:55:59 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		if (src[c] == '\0')
		{
			while (c < n)
			{
				dest[c] = '\0';
				c++;
			}
			return (dest);
		}
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
