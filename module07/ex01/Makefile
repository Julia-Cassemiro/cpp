# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 00:54:15 by jgomes-c          #+#    #+#              #
#    Updated: 2023/03/28 00:54:15 by jgomes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJDIR	=	obj/

F_FILE	=	main.cpp
OBJ		=	$(F_FILE:%.cpp=$(OBJDIR)%.o)

CCP		=	c++
RM		=	rm -rf
P_GUARD	=	mkdir -p $(@D)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
NAME	=	a.out

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CCP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o:	%.cpp
	$(P_GUARD)
	$(CCP) $(CFLAGS) -c $< -o $@

run: all
	./$(NAME)

val: all
	valgrind --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./$(NAME)

clean:
	$(RM) $(OBJDIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re run val
