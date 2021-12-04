#include "pushswap.h"

void	ft_rotate_a(t_list **a, t_list **b)
{
	t_list *tmp;

	(void)b;
	tmp = (*a);
	(*a) = (*a)->next;
	ft_lstadd_back(a, tmp);
	return ;
}
