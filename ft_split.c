#include "libft.h"

static int	ft_count_words(const char *s, char del)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] && s[i] != del)
			i++;
		counter++;
		while (s[i] && s[i] == del)
			i++;
	}
	return (counter);
}

static int	fill_array(char **array, int len, char c, char const **s, int i)
{
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	array[i] = malloc(sizeof(char) * (len + 1));
	if (!array[i])
		return (1);
	array[i][len] = '\0';
	len = 0;
	while (**s && **s != c)
	{
		array[i][len] = **s;
		len++;
		(*s)++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**array;

	while (*s && *s == c)
		s++;
	len = ft_count_words(s, c);
	array = malloc(sizeof(char *) * (len + 1));
	array[len] = NULL;
	i = 0;
	while (array[i])
	{
		if (fill_array(array, len, c, &s, i))
			return (NULL);
		while (*s && *s == c)
			s++;
		i++;
	}
	return (array);
}
