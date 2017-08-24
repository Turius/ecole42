/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:28:22 by jayache           #+#    #+#             */
/*   Updated: 2017/08/20 17:37:32 by jayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sastantua_write_story(int size, int decallage, int pallier)
{
	int compteur;
	int compteur2;

	compteur2 = 0;
	compteur = 0;
	while (compteur2 < pallier)
	{
		while (compteur < decallage - compteur2)
		{
			ft_putchar(' ');
			compteur++;
		}
		compteur = 0;
		ft_putchar('/');
		while (compteur < size + (size - 1))
		{
			ft_putchar('*');
			compteur++;
		}
		compteur2++;
		size++;
		ft_putchar('\\');
		ft_putchar('\n');
		compteur = 0;
	}
}

void	sastantua_write_base_lign(int size, int decal, int etage, int pyramid)
{
	int brick;
	int porte;

	porte = pyramid % 2 == 0 ? pyramid - 1 : pyramid;
	brick = 0;
	while (brick < decal)
	{
		ft_putchar(' ');
		brick++;
	}
	brick = 0;
	ft_putchar('/');
	while (brick < size + (size - 1))
	{
		if (etage == porte / 2 + 1 && brick == size + porte / 2 - 2 &&
				pyramid > 4)
			ft_putchar('$');
		else if (etage <= porte && brick >= size - 1 - porte / 2 && brick
				<= size - 1 + porte / 2)
			ft_putchar('|');
		else
			ft_putchar('*');
		brick++;
	}
}

void	sastantua_write_base(int size, int decallage, int pallier, int pyramid)
{
	int brick;
	int floor;
	int porte;
	int etage;

	floor = 0;
	brick = 0;
	while (floor < pallier)
	{
		etage = pallier - floor;
		sastantua_write_base_lign(size, decallage, etage, pyramid);
		ft_putchar('\\');
		ft_putchar('\n');
		floor++;
		brick = 0;
		decallage--;
		size++;
	}
}

int		calcul_decalage(int size)
{
	int compteur;
	int compteur2;
	int pallier;
	int decallage;

	decallage = 0;
	compteur = 1;
	compteur2 = 1;
	pallier = 3;
	while (compteur2 < size)
	{
		while (compteur <= pallier)
		{
			decallage++;
			compteur++;
		}
		pallier++;
		compteur = 0;
		compteur2++;
		decallage += (2 + (compteur2 - 2) / 2);
	}
	decallage += 2;
	return (decallage);
}

void	sastantua(int size)
{
	int pallier;
	int decallage;
	int compteur;
	int compteur2;
	int f_taille;

	f_taille = 1;
	compteur2 = 1;
	pallier = 3;
	compteur = 1;
	decallage = calcul_decalage(size);
	while (compteur2 < size && size > 0)
	{
		sastantua_write_story(f_taille, decallage + 1, pallier);
		decallage -= pallier;
		f_taille += pallier;
		compteur2++;
		pallier++;
		decallage -= (2 + (compteur2 - 2) / 2);
		f_taille += (2 + (compteur2 - 2) / 2);
		compteur = 1;
	}
	size > 0 ? sastantua_write_base(f_taille, decallage + 1, pallier, size) : 0;
}
