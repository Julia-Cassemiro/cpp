# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/30 08:09:52 by jgomes-c          #+#    #+#              #
#    Updated: 2023/05/01 04:56:25 by jgomes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJDIR	=	obj/

F_FILE	=	main.cpp RPN.cpp 
OBJ		=	$(F_FILE:%.cpp=$(OBJDIR)%.o)

CCP		=	c++
RM		=	rm -rf
P_GUARD	=	mkdir -p $(@D)
CFLAGS	=	-Wall -Wextra -Werror -I -std=c++98 -g
NAME	=	RPN

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CCP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o:	%.cpp
	$(P_GUARD)
	$(CCP) $(CFLAGS) -c $< -o $@

run: all
	./$(NAME)

val: all
	valgrind --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./RPN "(1 + 1)"
	
clean:
	$(RM) $(OBJDIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re run val
