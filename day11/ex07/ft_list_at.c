#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list		*my_list;

	my_list = *begin_list;
	while (nbr > 0)
	{
		my_list = my_list->next;
		nbr--;
	}
	return (my_list);
}
