# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 03:52:37 by jgomes-c          #+#    #+#              #
#    Updated: 2023/03/03 03:52:37 by jgomes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -Wshadow
RM = rm -rf
NAME = main
OBJDIR	=	obj/

FILES = main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

run:
	./$(NAME)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./$(NAME)

clean:
	$(RM) $(NAME) $(OBJDIR)

fclean:	clean
	$(RM) $(NAME)

re: clean all