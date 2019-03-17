/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 18:22:13 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/17 22:50:10 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		is_rush(int width, int height, char *str)
{
	int		exit_codes[5];

	if (width == 0 || height == 0)
	{
		ft_putstr("Zero dimensions.");
		return ;
	}
	exit_codes[0] = is_rush00(str, width, height);
	exit_codes[1] = is_rush01(str, width, height);
	exit_codes[2] = is_rush02(str, width, height);
	exit_codes[3] = is_rush03(str, width, height);
	exit_codes[4] = is_rush04(str, width, height);
	if (exit_codes[0] || exit_codes[1] || exit_codes[2] ||
			exit_codes[3] || exit_codes[4])
		print_result(width, height, exit_codes);
	else
		ft_putstr("Not a rush.");
}
