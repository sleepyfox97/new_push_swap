#include "pushswap.h"

//スタックの用のgetter
int	ft_get_stack_value(t_list *lst)
{
	t_stack *content;

	content = (t_stack *)lst->content;
	return (content->value);
}

//スタックの用のgetter
unsigned int ft_get_stack_key(t_list *lst)
{
	t_stack *content;

	content = (t_stack *)lst->content;
	return (content->key);
}

//stack用のsetter
void	ft_set_stack_key(t_list *lst, unsigned int key)
{
	t_stack *content;

	content = (t_stack *)lst->content;
	content->key = key;
	return ;
}

//saとか各種ルールの呼び出し用の関数
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
