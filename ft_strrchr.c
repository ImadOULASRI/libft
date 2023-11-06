#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j)
		return ((char *)&s[j]);
	else
		return (NULL); 
}
