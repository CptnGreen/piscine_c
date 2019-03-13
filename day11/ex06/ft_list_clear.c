/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:33:53 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 22:36:52 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*node;
	t_list	*next_node;

	node = *begin_list;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*begin_list = NULL;
}
