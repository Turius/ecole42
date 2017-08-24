/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:55:12 by nschwarz          #+#    #+#             */
/*   Updated: 2017/08/20 18:45:46 by jayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlen_x(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		ft_strlen_y(char *str)
{
	int c;
	int n;

	c = 0;
	n = 0;
	while (str[c])
	{
		if (str[c] == '\n')
			n++;
		c++;
	}
	return (n);
}

int		ft_strcmp(char *s1, char *s2)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (1 == 1)
	{
		c += (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (c);
		if (s1[i] == s2[i])
			i++;
		else
			return (c);
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
