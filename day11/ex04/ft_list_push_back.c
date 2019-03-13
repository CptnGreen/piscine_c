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
