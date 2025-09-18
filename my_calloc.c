#include "mylibrary.h"

void	*my_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	my_bzero(ptr, count * size);
	return ((void *)ptr);
}
