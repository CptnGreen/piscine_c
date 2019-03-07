#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("or_strdup: %s\n", strdup(argv[1]));	
		printf("ft_strdup: %s\n", ft_strdup(argv[1]));	
	}
	return (0);
}
