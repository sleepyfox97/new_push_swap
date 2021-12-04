#include "pushswap.h"
#include "libft.h"

t_list	*ft_coordinate_compression(t_list *stack, unsigned int len)
{
	unsigned int	i;
	t_list			*front;
	t_list			*back;
	t_list			*tmp;

	i = 1;
	front = stack;
	back = front->next;
	while (i < len - 1)
	{
		while (back != NULL)
		{
			if (0 < ft_get_stack_key(front) && ft_get_stack_key(front) < i)
			{
				front = front->next;
				back = front->next;
				continue;
			}
			if (0 < ft_get_stack_key(back) && ft_get_stack_key(back) < i)
			{
				back = back->next;
				continue;
			}
			if (ft_get_stack_value(front) < ft_get_stack_value(back))
				tmp = front;
			else
				tmp = back;
			front = tmp;
			back = back->next;
		}
		ft_set_stack_key(tmp, i);
		front = stack;
		back = front->next;
		i++;
	}
	while (front != NULL)
	{
		if (0 == ft_get_stack_key(front))
			ft_set_stack_key(front, len - 1);
		front = front->next;
	}
	return stack;
}
