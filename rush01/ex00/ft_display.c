/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achirat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:17:12 by achirat           #+#    #+#             */
/*   Updated: 2017/08/13 13:51:19 by achirat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(char **argv)
{
	int n;
	int c;

	n = 0;
	c = 1;
	while (c < 10)
	{
		n = 0;
		while (n < 9)
		{
			ft_putchar(argv[c][n]);
			if (n != 8)
				ft_putchar(' ');
			n++;
		}
		c++;
		ft_putchar('\n');
	}
}
