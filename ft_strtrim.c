#include "libft.h"

static int	is_inset(char c, char const *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	while (s1[i] && is_inset(s1[i++], s2));
	start = i;
	while (s1[++i]);
	i--;
	while (i && is_inset(s1[i--], s2));
	end = i;
	res = malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i <= end - start + 1)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int main()
{
	printf("%s\n", ft_strtrim("    \t\t\t\n   hello     world    \t\t\t\n     ", " \t\n"));
}
