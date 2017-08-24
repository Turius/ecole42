/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:31:30 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/13 01:14:42 by ltarchi          ###   ########.fr       */
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

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int		main(int argc, char **argv)
{
	int length;
	int numb;

	numb = argc;
	length = ft_strlen(*argv);
	while (numb > 1)
	{
		ft_putstr(argv[numb - 1]);
		ft_putchar('\n');
		numb--;
	}
	return (0);
}
