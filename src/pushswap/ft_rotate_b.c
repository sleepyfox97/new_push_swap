#include "pushswap.h"

void	ft_rotate_b(t_list **a, t_list **b)
{
	t_list *tmp;

	(void)a;
	tmp = (*b);
	(*b) = (*b)->next;
	ft_lstadd_back(b, tmp);
	return ;
}
