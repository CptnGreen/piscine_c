/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:50:24 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/03 20:52:18 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	rush(int x, int y)
{
	int column;
	int row;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (row == 1 && column == 1)
				ft_putchar('/');
			else if ((row == 1 && column == x) || (column == 1 && row == y))
				ft_putchar('\\');
			else if (row == y && column == x)
				ft_putchar('/');
			else if ((column == 1 || row == 1 || column == x || row == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
