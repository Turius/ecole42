/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 09:43:07 by ltarchi           #+#    #+#             */
/*   Updated: 2017/08/22 10:54:39 by ltarchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
int		ft_atoi(const char *str);
void	ft_sub(int n1, int n2);
void	ft_add(int n1, int n2);
void	ft_mul(int n1, int n2);
void	ft_div(int n1, int n2);
void	ft_mod(int n1, int n2);
void	ft_usage(void);
int		do_op(char **av);

#endif
