/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 16:10:06 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/09 20:49:17 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0'
			&& s2[c] != '\0' && c <= n)
		c++;
	return (s1[c] - s2[c]);
}