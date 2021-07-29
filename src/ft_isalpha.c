#include "libft.h"

int	is_lower(int c)
{
	return (c >= 97 && c <= 122);
}

int	is_upper(int c)
{
	return (c >= 65 && c <= 90);
}

int	ft_isalpha(int c)
{
	return ((is_lower(c) || is_upper(c)));
}
