#include "libft.h"

t_list	*ft_new_asslist(char *key, void	*value, t_list **lst)
{
	t_list	*new;
	t_ass	*content;

	content = (t_ass *)malloc(sizeof(t_ass));
	if (content == NULL)
		return (NULL);
	content->key = key;
	content->value = (void *)value;
	new = ft_lstnew(content);
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	ft_lstadd_back(lst, new);
	return (*lst);
}

char	*ft_get_key(t_list *lst)
{
	t_ass *content;

	if (lst == NULL)
		return NULL;
	content = (t_ass*)lst->content;
	return (content->key);
}

