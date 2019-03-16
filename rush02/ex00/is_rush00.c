/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:50:24 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/16 19:17:24 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	is_rush00(int x, int y)
{
	int column;
	int row;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 && column == 1) || (row == y && column == 1))
				ft_putchar('o');
			else if ((row == y && column == x) || (row == 1 && column == x))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if (column == 1 || column == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
