#include "libft.h"
#include "pushswap.h"
#include <unistd.h>
#include <stdio.h>


int main(int argc, char **argv)
{
	if (!ft_check_arg(argc, argv))
		write(2, "check argumet is really int!\n", 30);
	return (0);
}


