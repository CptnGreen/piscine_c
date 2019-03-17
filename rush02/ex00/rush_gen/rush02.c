/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:55:26 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/03 20:56:23 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

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
			if ((row == 1 && column == 1) || (row == 1 && column == x))
				ft_putchar('A');
			else if ((row == y && column == x) || (column == 1 && row == y))
				ft_putchar('C');
			else if (column == 1 || row == 1 ||
				column == x || row == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
