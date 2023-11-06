#include "libft.h"

static int	num_length(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;	
	}
	if (!n)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*result;
	int		i;

	size = num_length(n);
	result = malloc(sizeof(char) * (size + 1));
	result[size] = '\0';
	i = size - 1;
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (i >= 0 && result[i] != '-')
	{
		result[i--] = n % 10 + 48;
		n /= 10;
	}
	return (result);
}
