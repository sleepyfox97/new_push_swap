#include "pushswap.h"
#include <stdio.h>

t_list	*ft_new_stack(unsigned int key, int value, t_list **lst)
{
	t_list	*new;
	t_stack	*content;

	content = (t_stack *)malloc(sizeof(t_stack));
	if (content == NULL)
		return (NULL);
	content->key = key;
	content->value = value;
	new = ft_lstnew(content);
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	ft_lstadd_back(lst, new);
	return (*lst);
}

t_list	*ft_make_stack(int argc, char **argv)
{
	int		i;
	t_list	*stack;

	i = 1;
	stack = NULL;
	while (i < argc)
	{
		stack = ft_new_stack(0, ft_atoi(argv[i]), &stack);
		if (stack == NULL)
		{
			//freeする
			return NULL;
		}
		i++;
	}
	return stack;
}
