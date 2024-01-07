CC = g++
CFLAGS = -Wall -Werror -Wextra
SRC_CONTACT = Contact.cpp
SRC_PHONEBOOK = PhoneBook.cpp main.cpp
OBJ = $(SRC_CONTACT:.cpp=.o) $(SRC_PHONEBOOK:.cpp=.o)
EXECUTABLE = phonebook

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)
