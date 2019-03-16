/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:16:45 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/03 20:20:25 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int column;
	int row;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (row == 1 && column == 1)
				ft_putchar('A');
			else if ((column == x && row == 1) || (row == y && column == 1))
				ft_putchar('C');
			else if (row == y && column == x)
				ft_putchar('A');
			else if ((column == 1 || row == 1 || column == x || row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
