# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 13:08:03 by ltarchi           #+#    #+#              #
#    Updated: 2017/08/20 14:30:49 by ltarchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES_DIR = -I./includes

FLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard srcs/*.c)

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(FLAGS) $(INCLUDES_DIR);
	ar rc $@ *.o;
	rm -rf *.o;	

clean:
	rm -rf *.o;

fclean: clean
	rm $(NAME);

re:	fclean all
