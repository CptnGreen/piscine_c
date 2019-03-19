#include "header.h"

void	find_bsq(char *map)
{
	t_list	*obst_list;

	obst_list = 0;
	get_map_params(map);
	check_map_and_find_obst(map, &obst_list);
}
