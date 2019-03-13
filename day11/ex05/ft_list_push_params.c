/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 21:55:43 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 21:56:23 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list		*first_elem;
	t_list		*new_node;
	int			i;

	i = 0;
	if (av[i])
	{
		first_elem = ft_create_elem(av[0]);
		i++;
		while (av[i] != 0)
		{
			new_node = ft_create_elem(av[i]);
			new_node->next = first_elem;
			first_elem = new_node;
			i++;
		}
	}
	return (first_elem);
}
