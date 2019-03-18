#include "header.h"

int	g_map_height;

int	get_map_height(char *map)
{
	int	i;
	int	j;
	char	*num_str;

	i = 0;
	while (map[i] >= '0' && map[i] <= '9')
		i++;
	if (i == 0)
	{
		ft_putstr("Map error - number of lines is not declared in the first line.\n");
		return (-1);
	}
	num_str = (char *)malloc(sizeof(char) * (i + 1));
	if (num_str)
		num_str[i] = '\0';
	else
	{
		ft_putstr("Memory allocation failure.\n");
		return (-1);
	}
	j = -1;
	while (++j < i)
		num_str[j] = map[j];
	g_map_height = ft_atoi(num_str);
	return (i);
}
