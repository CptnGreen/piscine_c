/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 21:42:29 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 21:42:34 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_list_push_front(t_list **begin_list, int *x, int *y)
{
	t_list	*my_list;

	my_list = ft_create_elem(x, y);
	my_list->next = *begin_list;
	*begin_list = my_list;
}
