#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	ft_bzero(ptr, count);
	return (ptr);	
}
