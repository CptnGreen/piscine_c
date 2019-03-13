#include <stdio.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*elem;	

	elem = ft_create_elem("first");
	if (argc > 1)
	{
		elem = ft_create_elem(argv[1]);
		printf("elem->data: %s\n", (char *)elem->data);
	}
	return (0);
}
