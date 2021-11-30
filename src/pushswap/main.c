#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

//結局，atoiの改造バージョンにして，int範囲内のみ，int配列として，返す形にしてしまうのが，後々幸せな気がするという結論
bool	ft_isint(char *str)
{
	int	length;
	int	i;

	length = ft_strlen(str);
	i = 0;
	if (length ==)
	while (i < length)
	{
		if ()
	}
}

bool	ft_check_arg(int argc, char **argv))
{
	int	i;

	i = 1;
	if (argc == 1)
		return false;
	while (i <= argc)
	{
		if (!ft_isint(argv[i]))
			return false;
		i++;
	}
	return true;
}

int main(int argc, char **argv)
{
	t_list *lst;

	if (!ft_check_arg(argc, argv))
		return (0);
//char *ans = ft_pushswap();
//ft_put(ans);
//free(ans);

	lst = NULL;
	if (argc == 1)
	{
		write(1, "Hello world!\n", 13);
		return (0);
	}
	char *test = "sea\n";
	void *value = (void*)test;
	t_ass *content;
	ft_new_asslist(argv[1], &value, &lst);
	content =  (t_ass*)lst->content;
	printf("%s\n", content->key);
}


