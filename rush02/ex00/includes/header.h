/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 17:56:22 by nschwarz          #+#    #+#             */
/*   Updated: 2017/08/20 22:13:04 by nschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUF_SIZE 64
# include <unistd.h>
# include <stdlib.h>

int		ft_strcmp(char *s1, char *s2);
char	*get_stdin(void);
char	*ft_strcat(char *dest, char *src);
void	ft_print_first_line_re(int x, int y, char *str);
void	ft_print_last_line_re(int x, char *str, int c);
void	ft_inter_lines_re(int x, char *str, int z);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
char	*sastantua(int c);
int		ft_strlen_x(char *str);
int		ft_strlen_y(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp_inv(char *str, char *str2);
char	*trianglegen(int rows);
char	*triangbottom(int rows);
char	*rectangle(int x, int y);
char	*square(int x);

#endif
