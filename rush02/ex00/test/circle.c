/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 21:26:22 by jayache           #+#    #+#             */
/*   Updated: 2017/08/20 21:47:26 by jayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	draw_lign(int size, int characters)
{
	int i;

	i = 0;
	while (i++ < size - characters)
	{
		write(1, " ", 1);
	}
	while (i++ < characters)
		write(1, "*", 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int 	i;
	int		a;
	int 	size;

	if (argc != 2)
		return 0;
	size = ft_atoi(argv[1]);
	a = 0;
	i = 1;
	draw_lign(size, size / 2);
	while (size / 2 + i < size)
	{
		draw_lign(size, size / 2 + i);
		i++;
	}
	while (a++ < size)
		draw_lign(size, size / 2 + i);
	while (size / 2 + i-- > size / 2)
		draw_lign(size, size / 2 + i);
	draw_lign(size, size / 2);
}
