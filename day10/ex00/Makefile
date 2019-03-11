# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slisandr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/11 21:55:59 by slisandr          #+#    #+#              #
#    Updated: 2019/03/11 23:20:17 by slisandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Outputs
ALIB = libft.a
EXEC = program

#Compilation flags
CFLAGS = -Wall -Werror -Wextra

#Source dir, files and paths
SRC_DIR = ./srcs/
SRC_FILES = ft_putchar.c ft_putstr.c ft_swap.c ft_strcmp.c ft_strlen.c
SRC_PATHS = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_swap.c $(SRC_DIR)ft_strcmp.c $(SRC_DIR)ft_strlen.c

OBJECTS = $(SRC_FILES:.c=.o)

.PHONY: all clean fclean re exec

all: $(ALIB)

exec: $(ALIB)
	gcc -I./includes/ main.c -L. -lft -o $(EXEC) 
$(ALIB): $(OBJECTS)
	ar rc $@ $(OBJECTS)
$(OBJECTS): $(SRC_PATHS)
	norminette -R CheckForbiddenSourceHeader $(SRC_PATHS) ./includes/libft.h
	gcc $(CFLAGS) -c $(SRC_PATHS)

clean: 
	rm -rf *.o srcs/*.o
fclean: clean
	rm -rf $(ALIB) $(EXEC)
re: fclean all
