#include "header.h"

int	g_i;
int	g_y;

int	is_end_of_map(char *map)
{
	if (map[g_i] == '\0')
	{
		if (g_y == g_map_height)
			return (0);
		else
		{
			ft_putstr("Map error");
			ft_putstr(" - wrong height.\n");
			return (0);
		}
	}
	else
	{
		ft_putstr("Map error");
		ft_putstr(" - wrong char.\n");
		return (0);
	}
}
