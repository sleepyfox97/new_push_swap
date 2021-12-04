#include "pushswap.h"

int		*ft_get_value(t_list *lst)
{
	t_ass *content;

	if (lst == NULL)
		return NULL;
	content = (t_ass *)lst->content;
	return ((int *)content->value);
}

void	*(*ft_get_func_from_key(t_list *lst, char *key))()
{
	t_ass *content;

	if (lst == NULL)
		return NULL;
	while (lst != NULL)
	{
		content = (t_ass *)lst->content;
		if (ft_strncmp(content->key,  key, 4) == 0)
			return (void*(*)())content->value;
		lst = lst->next;
	}
	return NULL;
}
