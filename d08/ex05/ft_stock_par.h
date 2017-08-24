/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:22:49 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/22 14:55:26 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

char			**ft_split_whitespaces(char *str);
typedef	struct	s_stock_par
{
	int size_param;
	char*str;
	char*copy;
	char**tab;
}				t_stock_par;
void			ft_show_tab(struct s_stock_par *par);
#endif
