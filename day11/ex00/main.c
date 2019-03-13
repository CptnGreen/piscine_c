/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:55:47 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 21:23:56 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*elem;

	if (argc > 1)
	{
		elem = ft_create_elem(argv[1]);
		printf("elem->data: %s\n", (char *)elem->data);
	}
	return (0);
}
