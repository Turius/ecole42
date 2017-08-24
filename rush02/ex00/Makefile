# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschwarz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/19 18:11:05 by nschwarz          #+#    #+#              #
#    Updated: 2017/08/20 18:18:16 by nschwarz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

INCLUDES_DIR = -I./includes

SRCS = srcs/ft_put.c srcs/ft_strings.c srcs/rush*.c srcs/get_stdin.c srcs/ft_string2.c srcs/main.c

SRCS_O = ft_put.o ft_strings.o rush*.o get_stdin.o ft_string2.o main.o

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) $(INCLUDES_DIR)
	gcc $(FLAGS) -o $(NAME) $(SRCS_O)

clean:
	/bin/rm -f $(SRCS_O)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
