#include <stdio.h>
#include "./include/libft.h"
#include "./include/pushswap.h"


int	*ft_get_value(t_list *lst)
{
	t_ass *content;

	if (lst == NULL)
		return NULL;
	content = (t_ass *)lst->content;
	return ((int *)content->value);
}

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

void ft_show_evrey_key(t_list *lst, char *s)
{
	printf("===%s====\n", s);
	if (lst == NULL)
	{
		printf("this lst is empty\n");
		return ;
	}
	while(lst != NULL)
	{
		printf("key = %s\n", ft_get_key(lst));
		lst = lst->next;
	}
	return ;
}

int main()
{
	t_list 	*lst_a;
	t_list 	*lst_b;

	lst_a = NULL;
	lst_b = NULL;
	//ルールを使用するための連想配列の作成
	lst_a = ft_new_asslist("sa", ft_swap_a, &lst_a);
	lst_a = ft_new_asslist("sb", ft_swap_b, &lst_a);
	lst_a = ft_new_asslist("pa", ft_push_a, &lst_a);
	lst_a = ft_new_asslist("pb", ft_push_b, &lst_a);
	lst_a = ft_new_asslist("ra", ft_rotate_a, &lst_a);
	lst_a = ft_new_asslist("rb", ft_rotate_b, &lst_a);
	lst_a = ft_new_asslist("rra", ft_rev_rotate_a, &lst_a);
	lst_a = ft_new_asslist("rrb", ft_rev_rotate_b, &lst_a);

	ft_show_evrey_key(lst_a, "lst_a");
	void *(* p1)(t_list **, t_list **);
	void *(* p2)(t_list **, t_list **);
	void *(* p3)(t_list **, t_list **);
	p1 = ft_get_func_from_key(lst_a, "pb");
	p2 = ft_get_func_from_key(lst_a, "rb");
	p3 = ft_get_func_from_key(lst_a, "rrb");
	(* p1)(&lst_a, &lst_b);
	(* p1)(&lst_a, &lst_b);
	(* p1)(&lst_a, &lst_b);
	ft_show_evrey_key(lst_a, "lst_a");
	ft_show_evrey_key(lst_b, "lst_b");

	
	(* p3)(&lst_a, &lst_b);
	ft_show_evrey_key(lst_a, "lst_a");
	ft_show_evrey_key(lst_b, "lst_b");
	(* p2)(&lst_a, &lst_b);
	return (0);
}