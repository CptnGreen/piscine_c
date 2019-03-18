SOURCE_FILES = ./srcs/*.c
HEADERS = header.h

OBJECTS = $(wildcard *.o)
TRASH = $(OBJECTS) *.h.gch

EXEC = bsq
TEST_FILES = 

C_FLAGS = -Wall -Werror -Wextra
N_FLAGS = -R CheckForbiddenSourceHeader

.PHONY = all clean fclean re norm test

all: $(EXEC)

$(EXEC): $(SOURCE_FILES) $(HEADERS)
	gcc -I. $(C_FLAGS) $(SOURCE_FILES)
	mv a.out $(EXEC)
clean:
	rm -f $(TRASH)
fclean: clean
	rm -f $(EXEC)
re: fclean all

norm: $(SOURCE_FILES) $(HEADERS)
	norminette $(N_FLAGS) $(SOURCE_FILES) $(HEADERS)
test: $(EXEC) $(TEST_FILES)
	./$(EXEC) $(TEST_FILES)
