/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:50:24 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/16 23:59:29 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	is_rush00(char *str, int w, int h)
{
	int column;
	int row;
	int	exit_code;
	int	i;

	row = 1;
	column = 1;
	exit_code = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((row == 1 && column == 1) || (row == h && column == 1))
			exit_code *= (str[i] == 'o');
		else if ((row == h && column == w) || (row == 1 && column == w))
			exit_code *= (str[i] == 'o');
		else if ((row == 1 || row == h) && (column != w + 1))
			exit_code *= (str[i] == '-');
		else if (column == 1 || column == w)
			exit_code *= (str[i] == '|');
		else if (column == w + 1)
			exit_code *= (str[i] == '\n');
		else
			exit_code *= (str[i] == ' ');
		i++;
		row = (i / (w + 1)) + 1;
		if (i % (w + 1) == 0)
			column = 1;
		else
			column = (i % (w + 1)) + 1; 
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

