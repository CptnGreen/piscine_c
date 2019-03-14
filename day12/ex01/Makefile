# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slisandr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 20:11:14 by slisandr          #+#    #+#              #
#    Updated: 2019/03/14 20:13:32 by slisandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

SOURCES = ./ft_display_file.c ./ft_putstr.c
HEADERS = header.h
OBJECTS = $(SOURCES:.c=.o)
TRASH = *.o *.h.gch

EXEC = ft_cat

.PHONY: all clean fclean re norm

all: $(EXEC)

$(EXEC): $(OBJECTS) $(HEADERS)
	gcc -I. main.c $(OBJECTS) $(HEADERS)
	mv a.out $(EXEC)
$(OBJECTS): $(SOURCES)
	gcc $(FLAGS) -c $(SOURCES)
clean: 
	rm -f $(TRASH)
fclean: clean
	rm -f $(EXEC)
re: fclean all

norm: $(SOURCES) $(HEADERS)
	norminette -R CheckForbiddenSourceHeader *.[ch]
