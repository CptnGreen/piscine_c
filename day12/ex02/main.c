#include "header.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");	
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		ft_cat(fd, );
		i++;
	}
	return (0);
}
