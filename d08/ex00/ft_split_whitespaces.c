/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 13:36:19 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/19 09:30:25 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' ||
		c == '\n' || c == '\r' ||
		c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int		ft_countwords(char *str)
{
	int c;
	int words;

	c = 0;
	words = 0;
	while (str && str[c])
	{
		if (str && ft_isspace(str[c]) == 0 && c == 0)
			words++;
		if (str && ft_isspace(str[c]) == 0 && ft_isspace(str[c - 1]) == 1)
			words++;
		c++;
	}
	return (words);
}

char	*ft_strspacecpy(char *tab, char *str)
{
	int n;

	n = 0;
	while (str[n] && ft_isspace(str[n]) == 0)
	{
		tab[n] = str[n];
		n++;
	}
	tab[n] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char**tab;
	int counter;
	int i;
	int k;

	i = 0;
	counter = ft_countwords(str);
	tab = (char **)malloc(sizeof(char *) * (counter + 1));
	while (str && i < counter)
	{
		k = 0;
		while (str && ft_isspace(*str))
			str++;
		while (ft_isspace(str[k]) == 0 && str[k])
			k++;
		tab[i] = (char *)malloc(sizeof(char) * (k + 1));
		tab[i] = ft_strspacecpy(tab[i], str);
		i++;
		if (str[k])
			str += k;
	}
	tab[i] = (void *)0;
	return (tab);
}
