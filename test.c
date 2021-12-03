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

t_list *(*ft_get_func_from_key(t_list *lst, char *key))()
{
	t_ass *content;

	if (lst == NULL)
		return NULL;
	while (lst != NULL)
	{
		content = (t_ass *)lst->content;
		if (ft_strncmp(content->key,  key, 4) == 0)
			return (t_list *(*)())content->value;
		lst = lst->next;
	}
	return NULL;
}

int main()
{
	t_list 	*lst_a;
	t_list 	*lst_b;

	lst_a = NULL;
	lst_b = NULL;
	lst_a = ft_new_asslist("sa", ft_swap_a, &lst_a);
	lst_a = ft_new_asslist("sb", ft_swap_b, &lst_a);
	printf("key = %s\n", ft_get_key(lst_a));
	printf("ket = %s\n", ft_get_key(lst_a->next));
	t_list *(* pa)(t_list *, t_list *);
	pa = ft_get_func_from_key(lst_a, "sa");
	lst_a = (* pa)(lst_a, lst_b);
	printf("key = %s\n", ft_get_key(lst_a));
	printf("ket = %s\n", ft_get_key(lst_a->next));
}