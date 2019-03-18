#include "header.h"

char	g_empt;
char	g_obst;
char	g_full;

void	get_map_params(char *map)
{
	int	i;

	i = 0;
	i = get_map_height(map);	
	if (g_map_height == 0)
	{
		ft_putstr("Map error - zero lines.\n");
		return ;
	}
	if (map[i] == '\0' || map[i] == '\n' || 
			map[i + 1] == '\0' || map[i + 1] == '\n' ||
			map[i + 2] == '\0' || map[i + 2] == '\n')
	{
		ft_putstr("Map error - some characters are not declared in the first line.\n");
		return ;
	}
	g_empt = map[i++];
	g_obst = map[i++];
	g_full = map[i++];
	if (map[i] != '\0' && map[i] != '\n')
	{
		ft_putstr("Map error - too many characters declared in the first line.\n");	
		return ;
	}
	printf("g_map_height = %d, g_empt = %c, g_obst = %c, g_full = %c\n", g_map_height, g_empt, g_obst, g_full);
}
