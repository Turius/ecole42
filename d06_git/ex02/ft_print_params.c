/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:31:30 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/13 01:19:41 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		ft_putchar(str[n]);
		n++;
	}
}

int		main(int argc, char **argv)
{
	int c;

	c = 1;
	(void)argc;
	while (argv[c] != '\0')
	{
		ft_putstr(argv[c]);
		ft_putchar('\n');
		c++;
	}
}
