CFLSGS = -Wall -Werror -Wextra

SOURCES = ./ft_display_file.c ./ft_putstr.c
HEADERS = header.h
OBJECTS = $(SOURCES:.c=.o)
TRASH = *.o *.h.gch

EXEC = ft_cat

.PHONY: all clean fclean re norm

all: $(EXEC)

$(EXEC): $(OBJECTS) $(HEADERS)
	gcc -I. main.c $(OBJECTS) $(HEADERS) -o $@
$(OBJECTS): $(SOURCES)
	gcc $(FLAGS) -c $(SOURCES)
clean: 
	rm -f $(TRASH)
fclean: clean
	rm -f $(EXEC)
re: fclean all

norm: $(SOURCES) $(HEADERS)
	norminette -R CheckForbiddenSourceHeader $<
