CC = c++
CFLAGS = -Wall -Werror -Wextra 
SRCS = main.cpp Serializer.cpp Data.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLE = Convertisseur_ultime

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
