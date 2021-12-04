#include "libft.h"
#include "pushswap.h"
#include <unistd.h>
#include <stdio.h>

void	ft_show_stack_content(t_list *stack)
{
	t_stack *tmp;
	while(stack != NULL)
	{
		tmp = (t_stack *)stack->content;
		printf("  key = %u\n", tmp->key);
		printf("value = %d\n", tmp->value);
		stack = stack->next;
	}
	return ;
}

//ここより上の関数はデバック用

int main(int argc, char **argv)
{
	t_list	*a;
	//t_list	result;

	if (!ft_check_arg(argc, argv))
	{
		write(2, "check argumet is really int! or there is no duplicate?\n", 56);
		return (0);
	}
	a = ft_make_stack(argc, argv);
	ft_show_stack_content(a);
	//keyにindexを小さい順に格納して，座標圧縮を行う
	ft_coordinate_compression(a, (unsigned int)(argc));

	printf("=========\n");
	ft_show_stack_content(a);
	//push swap関数の実装
	//resultをlist形式で手に入れて，さらに最適化をかける
	//出力
	return (0);
}
