/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:58:48 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 17:59:24 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*first_elem;
	int	i;
	int	j;

	first_elem = ft_create_elem("first");
	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i] != 0)
		{
			ft_list_push_back(&first_elem, argv[i]);
			i++;
		}
		while (j < i)
		{
			printf("elem #%d data: %s\n", j, (char *)first_elem->data);
			first_elem = first_elem->next;
			j++;
		}
	}
	return (0);
}
