/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:37:42 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/17 22:32:14 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		update_exit_code_rush03(int w, int h, int i, char *str);

int		is_rush03(char *str, int w, int h)
{
	int	exit_code;
	int	i;

	exit_code = 1;
	i = 0;
	while (str[i] != '\0')
	{
		exit_code *= update_exit_code_rush03(w, h, i, str);
		i++;
	}
	return (exit_code);
}

int		update_exit_code_rush03(int w, int h, int i, char *str)
{
	int column;
	int row;
	int	exit_code;

	exit_code = 1;
	row = (i / (w + 1)) + 1;
	if (i % (w + 1) == 0 || i == 0)
		column = 1;
	else
		column = (i % (w + 1)) + 1;
	if (column != w && row != h && column != 1 && row != 1)
		exit_code *= (str[i] == ' ');
	else if ((column == 1 && row == 1) || (column == 1 && row == h))
		exit_code *= (str[i] == 'A');
	else if ((column == w && row == 1) || (column == w && row == h))
		exit_code *= (str[i] == 'C');
	else if (column == (w + 1))
		exit_code *= (str[i] == '\n');
	else
		exit_code *= (str[i] == 'B');
	return (exit_code);
}
