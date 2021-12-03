#include "pushswap.h"


t_list	*ft_swap_a(t_list *a, t_list *b)
{
	t_list	*lst_next;

	(void)b;
	lst_next = a->next;

	a->next = lst_next->next;
	lst_next->next = a;
	return (lst_next);
}
