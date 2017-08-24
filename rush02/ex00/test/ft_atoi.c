/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 23:52:02 by nschwarz          #+#    #+#             */
/*   Updated: 2017/08/06 18:49:21 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_temp(int *a, int *b, long *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

int		ft_atoi(const char *str)
{
	int		i;
	int		n;
	long	r;

	ft_temp(&i, &n, &r);
	while (0 < str[i] && str[i] < 33)
		i++;
	if (str[i] == 45)
	{
		n = 1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	if (!(str[i] > 47 && str[i] < 58))
		return (0);
	while (str[i] > 47 && str[i] < 58)
	{
		r *= 10;
		r += (str[i] - 48);
		i++;
	}
	if (n == 1)
		r = -r;
	return ((int)r);
}
