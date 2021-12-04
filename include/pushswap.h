#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "libft.h"

typedef struct s_stack
{
	unsigned int	key;
	int				value;
}		t_stack;

bool	ft_check_arg(int argc, char **argv);
void	ft_swap_a(t_list **a, t_list **b);
void	ft_swap_b(t_list **a, t_list **b);
void	ft_push_a(t_list **a, t_list **b);
void	ft_push_b(t_list **a, t_list **b);
void	ft_rotate_a(t_list **a, t_list **b);
void	ft_rotate_b(t_list **a, t_list **b);
void	ft_rev_rotate_b(t_list **a, t_list **b);
void	ft_rev_rotate_a(t_list **a, t_list **b);

void	*(*ft_get_func_from_key(t_list *lst, char *key))();
int		*ft_get_value(t_list *lst);

t_list	*ft_make_stack(int argc, char **argv);
t_list	*ft_new_stack(unsigned int key, int value, t_list **lst);




#endif