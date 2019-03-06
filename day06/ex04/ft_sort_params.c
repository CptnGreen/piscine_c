void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	char	r;
	char	min;

	i = 0;
	n = 0;
	min = find_min(argv
	if (argc >= 1)
	{
		while (n > 0)
		{
			while (argv[n][i] != '\0')
			{
				ft_putchar(argv[n][i]);
				i = i + 1;
			}
			ft_putchar('\n');
			n = n - 1;
			i = 0;
		}
	}
	return (0);
}

char	find_min(char *array, int len)
{
	int	i;
	int	min;

	i = 0;
	min = 256;
	while (i < len)
	{
		if (array[i] < min)
			min = array[i];
		i++;	
	}
	return (min);
}

void	swap_two_elements(char *array, int n1, int n2)
{
	char	c;

	c = array[n1];
	array[n1] = array[n2];
	array[n2] = c;
}

void	bubble_sort(char *array, int len)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (len - k > 1)
	{
		while (i < len - k)
		{
			if (array[i] > array[i + 1])
				swap_two_elements(i, i + 1);
			i++;	
		}
		k++;
		i = 0;
	}
}
