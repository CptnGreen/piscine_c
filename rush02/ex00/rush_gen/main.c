void	rush(int x, int y);
void	ft_putstr(char *str);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		ft_putstr("Missing argument.\n");
		return (1);
	}
	if (argc > 3)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (argc == 3)
	{
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
