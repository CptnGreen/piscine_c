SOURCES = ft_putchar.c ft_putstr.c ft_atoi.c main.c
RUSH_FILES = rush0[01234].c
CFLAGS = -Wall -Werror -Wextra
NFLAGS = -R CheckForbiddenSourceHeader
EXECS = colle-0[01234]

.PHONY: all clean fclean re norm

all: $(EXECS)

$(EXECS): $(SOURCES) $(RUSH_FILES)
	gcc $(CFLAGS) $(SOURCES) rush00.c -o colle-00
	gcc $(CFLAGS) $(SOURCES) rush01.c -o colle-01
	gcc $(CFLAGS) $(SOURCES) rush02.c -o colle-02
	gcc $(CFLAGS) $(SOURCES) rush03.c -o colle-03
	gcc $(CFLAGS) $(SOURCES) rush04.c -o colle-04
clean:
	rm -f *.o *.h.gch
fclean: clean
	rm -f $(EXECS)
re: fclean all

norm: $(SOURCES) $(RUSH_FILES)
	norminette $(NFLAGS) $(SOURCES) $(RUSH_FILES)
