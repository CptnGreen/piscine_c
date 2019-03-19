/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 21:22:32 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 21:31:17 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list		*ft_create_elem(int *x, int *y)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->next = NULL;
		new_node->x = x;
		new_node->y = y;
	}
	return (new_node);
}
