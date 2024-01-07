CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp zombieHorde.cpp Zombie.cpp
EXECUTABLE = T1

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *~

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
