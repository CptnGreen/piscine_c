void	ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	int	i;
	int	res;
	char	new[15];

	res = nbr;
	i = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		res = res * (-1);
	}
	while (res > 0)
	{
		new[i] = res % 10 + '0';
		res = res / 10;
		i++;
	}
	i--;
	while (i >= 0)
		ft_putchar(new[i--]);
}
