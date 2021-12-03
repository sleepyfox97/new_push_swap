#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "libft.h"

bool	ft_check_arg(int argc, char **argv);
void	ft_swap_a(t_list **a, t_list **b);
void	ft_swap_b(t_list **a, t_list **b);
void	ft_push_a(t_list **a, t_list **b);
void	ft_push_b(t_list **a, t_list **b);
void	ft_rotate_a(t_list **a, t_list **b);
void	ft_rotate_b(t_list **a, t_list **b);
void	ft_rev_rotate_b(t_list **a, t_list **b);
void	ft_rev_rotate_a(t_list **a, t_list **b);

#endif