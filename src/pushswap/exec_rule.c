#include "libft.h"
#include "pushswap.h"

void *(*ft_get_func_from_key(t_list *lst, char *key))()
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

//ft_new_asslistが失敗したときの対応を考えとくべきかも
t_list	*make_func_list(void)
{
	t_list	*lst_func;

	lst_func = NULL;
	lst_func = ft_new_asslist("sa", ft_swap_a, &lst_func);
	lst_func = ft_new_asslist("sb", ft_swap_b, &lst_func);
	lst_func = ft_new_asslist("pa", ft_push_a, &lst_func);
	lst_func = ft_new_asslist("pb", ft_push_b, &lst_func);
	lst_func = ft_new_asslist("ra", ft_rotate_a, &lst_func);
	lst_func = ft_new_asslist("rb", ft_rotate_b, &lst_func);
	lst_func = ft_new_asslist("rra", ft_rev_rotate_a, &lst_func);
	lst_func = ft_new_asslist("rrb", ft_rev_rotate_b, &lst_func);
	return lst_func;
}

char	*exec_rule(t_list *funcs, char *key, t_list stack_a, t_list stack_b)
{
	char	*content;
	void	*(* ptr_func)(t_list **, t_list **);

	ptr_func = ft_get_func_from_key(lst_a, key);
	(* ptr_func)(&lst_a, &lst_b);
	return key;
}

t_list	*make_answer_list(char *rule, t_list **lst_ans)
{
	t_list	*new;

	new = ft_lstnew(rule);
	if (new == NULL)
		return NULL;
	ft_lstadd_back(lst_ans, new);
	return *lst_ans;
}
