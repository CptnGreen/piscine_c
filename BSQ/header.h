#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>

typedef struct			s_list
{
	struct s_list	*next;
	int		*x;
	int		*y;
}				t_list;

void				find_bsq(char *str);

void				ft_putchar(char c);
void				ft_putstr(char *str);
int				ft_atoi(char *str);

int				skip_first_row(char *map);

int				get_width(char *str);
int				get_map_height(char *map);
void				get_map_params(char *map);

void				check_map_and_find_obst(char *map, t_list **obst_list);
int				is_empt_or_obst(char *map, t_list **obst_list);
int				is_new_row(char *map);
int				is_end_of_map(char *map);

extern int			g_map_height;
extern int			g_map_width;
extern char			g_empt;
extern char			g_obst;
extern char			g_full;

extern int			g_i;
extern int			g_x;
extern int			g_y;

t_list				*ft_create_elem(int *x, int *y);
void				ft_list_push_back(t_list **begin_list, int *x, int *y);
void				ft_list_push_front(t_list **begin_list, int *x, int *y);
t_list				*ft_list_at(t_list *begin_list, unsigned int nbr);
t_list				*ft_list_push_params(int ac, char **av);

#endif
