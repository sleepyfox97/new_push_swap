#include "pushswap.h"

void	ft_rev_rotate_b(t_list **a, t_list **b)
{
	t_list *booby;
	t_list *last;

	(void)a;
	booby = (*b);
	if ((*b)->next == NULL)
		return ;
	if ((*b)->next->next == NULL)
	{
		last = (*b)->next;
		booby = (*b);
	}
	else
	{
		while(booby->next->next != NULL)
			booby = booby->next;
		last = booby->next;
	}
	booby->next = NULL;
	ft_lstadd_front(b, last);
	return ;
}
