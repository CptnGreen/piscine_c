#include "header.h"

int	g_i;
int	g_x;
int	g_y;

void	check_map_and_find_obst(char *map, t_list **obst_list)
{
	g_i = skip_first_row(map);
	while (is_empt_or_obst(map, obst_list))
		;
}
