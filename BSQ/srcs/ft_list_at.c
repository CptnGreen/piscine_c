/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:38:38 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 23:01:27 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*my_list;
	unsigned int	i;

	i = 0;
	my_list = begin_list;
	if (my_list)
	{
		while (i < nbr - 1)
		{
			my_list = my_list->next;
			i++;
		}
		return (my_list);
	}
	else
		return (0);
}
