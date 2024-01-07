CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Harl.cpp
EXECUTABLE = a.out

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *~

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
