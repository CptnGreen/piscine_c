#include <stdio.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*first_elem;
	t_list	*node;
	int	i;

	first_elem = ft_create_elem("first");
	i = 1;
	if (argc > 1)
	{
		while (argv[i] != 0)
		{
			ft_list_push_back(&first_elem, argv[i]);
			i++;
		}
	}
	node = ft_list_last(first_elem);
	printf("ft_list_last(): %s\n", node->data);
	return (0);
}
