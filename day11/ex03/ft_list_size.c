/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 21:47:19 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 21:49:02 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*my_list;
	int		i;

	my_list = begin_list;
	i = 0;
	while (my_list)
	{
		i++;
		my_list = my_list->next;
	}
	return (i);
}
