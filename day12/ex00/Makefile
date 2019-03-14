# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slisandr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 17:36:24 by slisandr          #+#    #+#              #
#    Updated: 2019/03/14 20:07:17 by slisandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_display_file.c ft_putstr.c
HEADERS = header.h
OBJECTS = $(SOURCES:.c=.o)
TRASH = *.o *.h.gch

EXEC = ft_display_file

.PHONY: all clean fclean re norm

all: $(EXEC)

$(EXEC): $(SOURCES) $(HEADERS)
	gcc -I. main.c $(SOURCES) $(HEADERS)
	mv a.out $(EXEC)
clean: 
	rm -f $(TRASH)
fclean: clean
	rm -f $(EXEC)
re: fclean all

norm: $(SOURCES) $(HEADERS)
	norminette -R CheckForbiddenSourceHeader $(SOURCES) $(HEADERS)
