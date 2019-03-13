/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:32:23 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 22:35:37 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*first_elem;
	t_list	*first_elem_copy;
	int		i;

	i = 0;
	first_elem = ft_list_push_params(argc, argv);
	first_elem_copy = first_elem;
	while (i < argc)
	{
		printf("elem #%d data: %s, pointer: %p\n", i, \
				(char *)first_elem->data, first_elem);
		first_elem = first_elem->next;
		i++;
	}
	first_elem = first_elem_copy;
	i = 0;
	ft_list_clear(&first_elem);
	while (i < argc)
	{
		printf("elem #%d data: %s, pointer: %p\n", i, \
				(char *)first_elem->data, first_elem);
		first_elem = first_elem->next;
		i++;
	}
	return (0);
}
