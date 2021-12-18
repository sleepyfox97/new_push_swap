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



int				ft_get_stack_value(t_list *lst);
unsigned int	ft_get_stack_key(t_list *lst);
void			ft_set_stack_key(t_list *lst, unsigned int key);
t_list			*ft_make_stack(int argc, char **argv);

t_list			*ft_coordinate_compression(t_list *stack, unsigned int len);

t_list			*make_func_list(void);
void			*(*ft_get_func_from_key(t_list *lst, char *key))();
void	*exec_rule(t_list *funcs, char *key, t_list stack_a, t_list stack_b);

#endif