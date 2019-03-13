#include <stdio.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*first_elem;
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
	printf("ft_list_size(): %d\n", ft_list_size(first_elem));
	return (0);
}
