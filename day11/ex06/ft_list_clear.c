#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*node;
	t_list	*next_node;

	node = *begin_list;
	while (node != 0)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*begin_list = NULL;
}
