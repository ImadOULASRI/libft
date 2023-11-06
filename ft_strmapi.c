#include "libft.h"

static char	*ft_copy(const char *s1)
{
	int		i;
	char	*copy;

	i = 0;
	while (s1[i])
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	
	i = 0;
	result = ft_copy(s);
	while (result[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
