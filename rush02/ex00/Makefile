# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slisandr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/16 17:53:40 by slisandr          #+#    #+#              #
#    Updated: 2019/03/16 18:07:14 by slisandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = main.c 
HEADERS = header.h
EXEC = colle-2
TRASH = 

CFLAGS = -Wall -Werror -Wextra
NFLAGS = -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re norm run

all: $(EXEC)

$(EXEC): $(SOURCES)
	gcc $(CFLAGS) $(SOURCES)
	mv a.out $(EXEC)

clean:
	rm -f *.o *.h.gch
fclean: clean
	rm -f $(EXEC)
re: fclean all

norm: $(SOURCES) $(HEADERS)
	norminette $(NFLAGS) $(SOURCES) $(HEADERS)
