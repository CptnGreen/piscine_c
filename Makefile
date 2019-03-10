CC=gcc
CFLAGS=-c -Wall -Werror -Wextra
LDFLAGS=
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.c.o: 
	$(CC) $(CFLAGS) $< -o $@
clean: *.o
	rm -rf *.o program a.out
