#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*result;

	len1 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	len1 = -1;
	while (s1[++len1])
		result[len1] = s1[len1];
	len2 = 0;
	while (s2[len2])
		result[len1++] = s2[len2++];
	return (result);
}
