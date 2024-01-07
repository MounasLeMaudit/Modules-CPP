CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLE = Projet_Iter

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