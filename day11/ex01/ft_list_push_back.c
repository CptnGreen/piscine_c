/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 21:36:22 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 21:40:48 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*my_list;

	my_list = *begin_list;
	if (my_list)
	{
		while (my_list->next)
			my_list = my_list->next;
		my_list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
