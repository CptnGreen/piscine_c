# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slisandr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/16 17:53:40 by slisandr          #+#    #+#              #
#    Updated: 2019/03/17 22:57:21 by slisandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ./srcs/*.c 
HEADERS = header.h
EXEC = colle-2
TRASH = 

CFLAGS = -Wall -Werror -Wextra
NFLAGS = -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re norm test

all: $(EXEC)

$(EXEC): $(SOURCES)
	gcc -I. $(CFLAGS) $(SOURCES)
	mv a.out $(EXEC)

clean:
	rm -f *.o *.h.gch
fclean: clean
	rm -f $(EXEC)
re: fclean all

norm: $(SOURCES) $(HEADERS)
	norminette $(NFLAGS) $(SOURCES) $(HEADERS)
test: 
	./rush_gen/colle-00 6 1 | ./$(EXEC)
	./rush_gen/colle-01 1 6 | ./$(EXEC)
	./rush_gen/colle-02 6 1 | ./$(EXEC)
	./rush_gen/colle-03 1 6 | ./$(EXEC)
	./rush_gen/colle-04 6 1 | ./$(EXEC)
	./rush_gen/colle-00 1 1 | ./$(EXEC)
	./rush_gen/colle-01 6 6 | ./$(EXEC)
	./rush_gen/colle-02 0 1 | ./$(EXEC)
	./rush_gen/colle-03 6 6 | ./$(EXEC)
	./rush_gen/colle-04 1 0 | ./$(EXEC)
	./rush_gen/colle-05 6 6 | ./$(EXEC)
	echo bla-bla-bla | ./$(EXEC)
	echo o---------o | ./$(EXEC)
	echo ABBBBBBBBBC | ./$(EXEC)
