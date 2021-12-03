#include "pushswap.h"
#include "libft.h"

bool	ft_check_arg(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return false;
	while (i < argc)
	{
		if (!ft_isint(argv[i]))
			return false;
		i++;
	}
	return true;
}