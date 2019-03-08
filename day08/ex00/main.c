#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int	main(int argc, char **argv)
{
	char	**result;
	int	i;

	if (argc > 1)
	{
		result = ft_split_whitespaces(argv[1]);
		i = 0;
		while (result[i] != 0)
		{
			printf("%d: %s", i, result[i]);	
			i++;
		}
	}
	return (0);
}
