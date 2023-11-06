#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!s || !n)
		return ;
	ptr = (char *)s;
	i = 0;
	if (!n)
		return;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}