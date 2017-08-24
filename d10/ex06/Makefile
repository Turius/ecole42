# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltarchi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 13:08:03 by ltarchi           #+#    #+#              #
#    Updated: 2017/08/22 11:54:34 by ltarchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op 

INCLUDES_DIR = -I./includes

FLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard srcs/*.c)

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRCS) $(FLAGS) $(INCLUDES_DIR);
	rm -rf *.o;	

clean:
	rm -rf *.o;

fclean: clean
	rm $(NAME);

re:	fclean all
