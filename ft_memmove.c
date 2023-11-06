#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*sr;
	unsigned char	*ds;
	size_t			i;

	sr = (unsigned char *)src;
	ds = (unsigned char *)dst;
	i = 0;
	if (ds > sr)
		while (len-- > 0)
			ds[len] = sr[len];
	else
	{
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (dst);
}