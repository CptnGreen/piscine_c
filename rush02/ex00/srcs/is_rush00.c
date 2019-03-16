/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:50:24 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/16 21:13:35 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	is_rush00(char *str, int w, int h)
{
	int column;
	int row;
	int	exit_code;

	row = 1;
	while (row <= h)
	{
		column = 1;
		while (column <= w)
		{
			if ((row == 1 && column == 1) || (row == h && column == 1))
				exit_code = is_symbol(str[row * w + column], 'o'); 
			else if ((row == h && column == w) || (row == 1 && column == w))
				exit_code = is_symbol(str[row * w + column], 'o');
			else if (row == 1 || row == h)
				exit_code = is_symbol(str[row * w + column], '-');
			else if (column == 1 || column == w)
				exit_code = is_symbol(str[row * w + column], '|');
			else
				exit_code = is_symbol(str[row * w + column], ' ');
			column++;
		}
		exit_code = is_symbol(str[row * w + column], '\n');
		if (exit_code != 1)
			break;
		row++;
	}
	if (exit_code == 1)
	{
		ft_putstr("[rush-00] [");
		ft_putnbr(w);
		ft_putstr("] [");
		ft_putnbr(h);
		ft_putstr("]");
	}
	else
		ft_putstr("no rush");
}
