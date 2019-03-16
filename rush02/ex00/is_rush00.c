/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:50:24 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/16 20:19:41 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	is_rush00(char *str, int w, int h)
{
	int column;
	int row;

	row = 1;
	while (row <= h)
	{
		column = 1;
		while (column <= w)
		{
			if ((row == 1 && column == 1) || (row == h && column == 1))
				is_symbol(str[row * w + column], 'o') ? : (return ;);
			else if ((row == h && column == w) || (row == 1 && column == w))
				is_symbol(str[row * w + column], 'o') ? : return ;
			else if (row == 1 || row == h)
				is_symbol(str[row * w + column], '-') ? : return ;
			else if (column == 1 || column == w)
				is_symbol(str[row * w + column], '|') ? : return ;
			else
				is_symbol(str[row * w + column], ' ') ? : return ;
			column++;
		}
		is_symbol(str[row * w + column], '\n') ? : return ;
		row++;
	}
}
