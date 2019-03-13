#ifndef _FT_LIST_H_
# define _FT_LIST_H_

typedef struct			s_list
{
	struct s_list		*next;
	void			*data;
}				t_list;

int		ft_list_size(t_list *begin_list);
t_list		*ft_create_elem(void *data);
void		ft_list_push_back(t_list **begin_list, void *data);

#endif