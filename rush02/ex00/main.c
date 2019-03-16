/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 18:07:22 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/16 18:24:29 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("Missing argument.");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.")
			return (1);
	}
	if (argc == 2)
	{
		is_rush(argv[1]);
	}
	ft_putstr("\n");
	return (0);
}
