#include "header.h"

int	g_i;
int	g_x;
int	g_y;

int	is_new_row(char *map)
{
	if (map[g_i] == '\n')
	{
		if (g_x == g_map_width)
		{
			g_x = 0;
			g_y++;
			g_i++;
		}
		else
		{
			ft_putstr("Map error");
			ft_putstr(" - wrong width.\n");
			return (0);
		}
	}
	else if (!is_end_of_map(map))
		return (0);
	return (1);
}
