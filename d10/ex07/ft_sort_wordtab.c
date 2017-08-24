/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 11:58:08 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/23 12:14:33 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
		c++;
	return (s1[c] - s2[c]);
}

void	ft_sort_wordtab(char **tab)
{
	int l;
	int i;
	char*temp;

	i = 0;
	l = 0;
	while (tab[l])
		l++;
	while (i < l)
	{
		if (tab[i] && tab[i + 1] && ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}
