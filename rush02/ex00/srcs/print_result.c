/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 20:48:12 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/17 20:51:12 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_result(int width, int height, int *exit_codes)
{
	int		i;
	int		pipes;

	i = 0;
	pipes = 0;
	while (i < 5)
	{
		if (exit_codes[i] == 1)
		{
			if (pipes)
			{
				ft_putstr(" || ");
				pipes = 0;
			}
			ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(width);
			ft_putstr("] [");
			ft_putnbr(height);
			ft_putstr("]");
			pipes = 1;
		}
		i++;
	}
}
