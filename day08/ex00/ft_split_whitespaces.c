#include <stdio.h>
#include <stdlib.h>

int	count_words(char *str);
int	memory_cells_counter(char *str);
void	copy_words(char **res, char *str, int w);

char	**ft_split_whitespaces(char *str)
{
	int	word_counter;
	int	cells;
	char	**res;

	word_counter = count_words(str);
	cells = memory_cells_counter(str); 
	printf("word_counter: %d, cells = %d\n", word_counter, cells);
	res = (char **)malloc(cells + 100);
	copy_words(res, str, word_counter);
	return (res);
}

void	copy_words(char **res, char *str, int w)
{
	int	i;
	int	j;
	int	isSep;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	isSep = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			isSep = 0;
			res[n][j] = str[i];
			i++;	
			j++;
		}
		else
		{
			if (isSep == 0)
			{
				n++;
				res[n][j] = '\0';
				printf("word %d: %s", n, res[n]);
				j = 0;
			}
			isSep = 1;
			i++;	
		}
	}
	if (i > 0)
		res[n][j] = '\0';
}

int	count_words(char *str)
{
	int	i;
	int	isSep;
	int	n;

	i = 0;
	n = 0;
	isSep = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			isSep = 0;
			i++;	
		}
		else
		{
			if (isSep == 0)
				n++;
			isSep = 1;
			i++;	
		}
	}
	if (i > 0)
		n++;
	return (n);
}

int	memory_cells_counter(char *str)
{
	int	i;
	int	memory_cells;
	int	isSep;

	i = 0;
	memory_cells = 0;
	isSep = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			isSep = 0;
			i++;	
			memory_cells++;
		}
		else
		{
			if (isSep == 0)
				memory_cells++;
			isSep = 1;
			i++;	
		}
	}
	if (i > 0)
		memory_cells++;
	return (memory_cells);
}
