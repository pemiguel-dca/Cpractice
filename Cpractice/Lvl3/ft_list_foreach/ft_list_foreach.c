#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*pointer;
	int	i;

	i = 0;
	pointer = begin_list;
	while (pointer[i].data)
	{
		(*f)(pointer->data);
		pointer = pointer[i].next;
		i++;
	}
}
