#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*my_list;

	my_list = ft_create_elem(data);
	my_list->next = *begin_list;
	*begin_list = my_list;
}
