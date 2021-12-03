#include "pushswap.h"

//bがNULLかどうかは使う前に確認
void	ft_push_a(t_list **a, t_list **b)
{
	t_list *tmp;

	if ((*b)->next == NULL)
	{
		(*b)->next = (*a);
		(*a) = (*b);
		(*b) = NULL;
	}
	else
	{
		tmp = (*b)->next;
		(*b)->next = (*a);
		(*a) = (*b);
		(*b) = tmp;
	}
	return ;
}