#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (argv[1] == "-n")
			ft_putnbr(42);
		if (argv[1] == "-c")
			ft_putchar(argv[1][0]);
		if (argv[1] == "-s")
			ft_putstr(argv[1]);
		
	}
	return (0);
}
