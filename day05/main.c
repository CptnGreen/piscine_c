#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-10);
	ft_putchar('\n');
	ft_putnbr(-120);
	ft_putchar('\n');
	ft_putnbr(-1000000000);
	ft_putchar('\n');
	ft_putnbr(4000);
	ft_putchar('\n');
	ft_putnbr('a');
	ft_putchar('\n');
	ft_putnbr(300);
	ft_putchar('\n');
	ft_putnbr(-50000);
	ft_putchar('\n');
	ft_putnbr(-3423423);
	ft_putchar('\n');
	ft_putnbr(3242);
	ft_putchar('\n');
	if (argc > 1)
	{
		ft_putchar(argv[1][0]);
		ft_putchar('\n');
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
