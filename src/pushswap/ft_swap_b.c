#include "pushswap.h"

void	ft_swap_b(t_list **a, t_list **b)
{
	t_list	*lst_next;

	(void)a;
	lst_next = (*b)->next;

	(*b)->next = lst_next->next;
	lst_next->next = (*b);
	return ;
}
