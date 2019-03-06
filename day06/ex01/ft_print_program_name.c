void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			i = i + 1;
		}
	}
	ft_putchar('\n');
	return (0);
}
