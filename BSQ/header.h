#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>

void		find_bsq(char *str);

void		ft_putchar(char c);
void		ft_putstr(char *str);
int		ft_atoi(char *str);

int		get_map_height(char *map);
void		get_map_params(char *map);
int		get_width(char *str);

extern int	g_map_height;
extern char	g_empt;
extern char	g_obst;
extern char	g_full;

#endif
