CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLE = LesBureaucratiens

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *~ $(OBJS)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
