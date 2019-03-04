void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	str[10];
	int	index;

	index = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	else if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		str[index] = nb % 10;
		index = index + 1;
		nb = nb / 10;
	}
	str[index] = '\0';
	index = index - 1;
	while (index >= 0)
	{
		ft_putchar(str[index] + 48);
		index = index - 1;
	}
}
