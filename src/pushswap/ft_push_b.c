#include "pushswap.h"

void	ft_push_b(t_list **a, t_list **b)
{
	t_list *tmp;

	if ((*a)->next == NULL)
	{
		(*a)->next = (*b);
		(*b) = (*a);
		(*a) = NULL;
	}
	else
	{
		tmp = (*a)->next;
		(*a)->next = (*b);
		(*b) = (*a);
		(*a) = tmp;
	}
	return ;
}