#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "libft.h"

bool	ft_check_arg(int argc, char **argv);
t_list	*ft_swap_a(t_list *a, t_list *b);
t_list	*ft_swap_b(t_list *a, t_list *b);


#endif