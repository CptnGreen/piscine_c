/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:39:41 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 22:58:57 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	t_list	*first_elem;
	t_list	*node;
	int		i;
	int		j;

	first_elem = ft_create_elem("first");
	i = 1;
	j = 0;
	if (argc > 1)
		first_elem = ft_list_push_params(argc, argv);
	node = ft_list_at(first_elem, atoi(argv[1]));
	printf("ft_list_at() -> data: %s\n", (char *)node->data);
	return (0);
}
