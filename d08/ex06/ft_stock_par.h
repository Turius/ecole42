/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:22:49 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/22 14:59:49 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <unistd.h>

void				ft_putchar(char c);
char				**ft_split_whitespaces(char *str);
typedef	struct		s_stock_par
{
	int size_param;
	char*str;
	char*copy;
	char**tab;
}					t_stock_par;
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
#endif
