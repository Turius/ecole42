/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 04:11:12 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/14 04:42:30 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 != '\0')
	{
		if (*s2 == '*')
			return (match((s1 + 1), s2) || match(s1, (s2 + 1)));
		if (*s1 == *s2)
			return (match((s1 + 1), (s2 + 1)));
		else
			return (0);
	}
	else
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 == '*')
			return (match(s1, (s2 + 1)));
		else
			return (0);
	}
}

int		main(int argc, char **argv)
{
	printf("%d\n", match(argv[1], argv[2]));
	return (0);
}
