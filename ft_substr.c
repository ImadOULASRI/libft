#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	j;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = start - 1;
	j = -1;
	while (s[i] && i < len + start)
	{
		str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
