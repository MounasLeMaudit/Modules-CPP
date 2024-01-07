CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLE = UFC358

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
