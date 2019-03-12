#include <stdlib.h>
#include <stdio.h>

#define LEN 5

int	*ft_map(int *tab, int length, int(*f)(int));
int	mult_by_2(int a);

int	main(void)
{
	int		i;
	int		*res;
	int		array[LEN] = {1, 2, 3, 4, 5};

	i = 0;
	res = ft_map(array, 5, &mult_by_2);
	while (i < 5)
	{
		printf("%d\n", res[i]);
		i++;
	}
	free(res);
	return (0);
}

int	mult_by_2(int a)
{
	return (2 * a);
}
