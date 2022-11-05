CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address
RM = rm -rf
NAME = Bureaucrat

FILES = main.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
	$(addprefix ./ex01/, Form.cpp) \
	$(addprefix ./ex01/ex00/, Bureaucrat.cpp)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

run: all
	./$(NAME)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./$(NAME)

clean:
	$(RM) $(NAME)

re: clean all
