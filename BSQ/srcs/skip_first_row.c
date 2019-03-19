#include "header.h"

/*
** This function returns map's second row's first character index
*/

int	skip_first_row(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\n' && map[i] != '\0')
		i++;
	return (++i);
}
