/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 18:05:53 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/13 21:51:17 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

int						ft_list_size(t_list *begin_list);
void					ft_list_push_back(t_list **begin_list, void *data);
t_list					*ft_list_last(t_list *begin_list);
t_list					*ft_create_elem(void *data);

#endif
