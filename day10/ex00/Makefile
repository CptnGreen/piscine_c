CC=gcc

#Flags
CFLAGS=-Wall -Werror -Wextra -I./includes
LDFLAGS=
AR=ar

#Folders
SRC_DIR=./srcs/

#Paths to files
SOURCES=$(wildcard ./srcs/*.c)

#Objects
OBJECTS=$(SOURCES:.c=.o)

#Output
EXECUTABLE=program
ALIB=libft.a

.PHONY: all clean fclean re

all: $(ALIB) $(EXECUTABLE) 

$(EXECUTABLE): $(ALIB)
	$(CC) $(CFLAGS) main.c -L. -lft -o $@
$(ALIB): $(OBJECTS)
	$(AR) rc $@ $(OBJECTS)
	rm -rf $(OBJECTS)
	ranlib $@
$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(ALIB) $(EXECUTABLE) a.out
re: fclean all
