CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address
RM = rm -rf
NAME = ScavTrap

FILES = ClapTrap.cpp main.cpp ScavTrap.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

run:
	./$(NAME)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./$(NAME)

clean:
	$(RM) $(NAME)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all