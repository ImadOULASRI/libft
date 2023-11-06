#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	des_len;
	size_t	src_len;
	size_t	res;
	size_t	i;

	des_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (des_len <= size)
		return (size + src_len);
	res = src_len + des_len;
	while (src[i] && des_len <= size)
	{
		dest[des_len] = src[i];
		i++;
		des_len++;
	}
	dest[des_len] = '\0';
	return (res);
}
