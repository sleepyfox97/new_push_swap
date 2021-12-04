#include "pushswap.h"
#include "libft.h"

bool	ft_check_same_num(int *numbers, int	len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (numbers[j] == numbers[i])
				return false;
			j++;
		}
		i++;
	}
	return true;
}

bool	ft_check_arg(int argc, char **argv)
{
	int		i;
	int		*numbers;
	bool	isNum;

	i = 1;
	if (argc == 1)
		return false;
	while (i < argc)
	{
		if (!ft_isint(argv[i]))
			return false;
		i++;
	}
	i = -1;
	numbers = (int *)malloc(sizeof(int) * (argc - 1));
		if (numbers == NULL)
			return false;
	while (++i < argc - 1)
		numbers[i] = ft_atoi(argv[i + 1]);
	isNum = ft_check_same_num(numbers, argc - 1);
	free(numbers);
	if (isNum == false)
		return false;
	return true;
}
