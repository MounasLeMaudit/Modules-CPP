CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp Weapon.cpp Weapon.hpp
EXECUTABLE = a.out

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *~

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
