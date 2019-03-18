#include "header.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		ft_putstr("Missing arguments.\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		find_bsq(argv[i]);
		i++;
	}
	return (0);
}
