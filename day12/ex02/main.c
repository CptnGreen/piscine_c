/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 17:36:56 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/14 22:03:46 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");	
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");	
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error.\n");
		return (1);
	}
	ft_tail(fd, );
	if (close(fd) == -1)
	{
		ft_putstr("close() error.\n");
		return (1);
	}
	return (0);
}
