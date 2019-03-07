#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int 	i;
	int	j;
	char	*ptr;

	i = 0;
	while (src[i++] != '\0')
	ptr = (char *)malloc(i);
	j = 0;
	while (j < i)
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[++j] = '\0';
	return ptr;
}
