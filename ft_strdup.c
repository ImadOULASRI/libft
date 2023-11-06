#include "libft.h"

char	*ft_strdup(const char *s1)
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
