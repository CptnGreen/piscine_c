/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 18:22:13 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/16 20:04:37 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	is_rush(char *str)
{
	int		width;
	int		height;

	width = get_width(str);
	height = get_height(str);
	if (width == 0 || height == 0)
	{
		ft_putstr("Zero dimensions.");
		return ;
	}
	is_rush00(str, width, height);
	is_rush01(str, width, height);
	is_rush02(str, width, height);
	is_rush03(str, width, height);
}
