void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putchar(argv[1][0]);
		ft_putchar('\n');
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
