#include "pushswap.h"

void	ft_rev_rotate_a(t_list **a, t_list **b)
{
	t_list *booby;
	t_list *last;

	(void)b;
	booby = (*a);
	if ((*a)->next == NULL)
		return ;
	if ((*a)->next->next == NULL)
	{
		last = (*a)->next;
		booby = (*a);
	}
	else
	{
		while(booby->next->next != NULL)
			booby = booby->next;
		last = booby->next;
	}
	booby->next = NULL;
	ft_lstadd_front(a, last);
	return ;
}