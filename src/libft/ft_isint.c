#include "libft.h"

bool	ft_isint(char *str)
{
	long	num;
	long	minus;

	num = 0;
	minus = 1;
	if (ft_strlen(str) > 11)
		return (false);
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			minus = -1;
	}
	while ('0' <= *str && *str <= '9')
		num = ((*str++) - '0') + num * 10;
	num = num * minus;
	if ((*str < '0' || '9' < *str) && *str != '\0')
		return (false);
	if (num < INT_MIN || INT_MAX < num)
		return (false);
	else
		return (true);
}
