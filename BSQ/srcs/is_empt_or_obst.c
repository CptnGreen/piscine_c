#include "header.h"

int	g_i;
int	g_x;
int	g_y;

int	is_empt_or_obst(char *map, t_list **obst_list)
{
	if (map[g_i] == g_empt)
	{
		g_i++;
		g_x++;
		is_empt_or_obst(map, obst_list);
	}
	else if (map[g_i] == g_obst)
	{
		ft_list_push_front(obst_list, &g_x, &g_y);
		g_x++;
		g_y++;
		is_empt_or_obst(map, obst_list);
	}
	else if (!is_new_row(map))
		return (0);
	return (1);
}
