/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:21:22 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/13 04:06:49 by ltarchi          ###   ########.fr       */
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
	(void)argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');
}
