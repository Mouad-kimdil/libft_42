#include "mylibrary.h"

void	*my_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destt;
	char	*srcc;

	i = 0;
	destt = (char *)dest;
	srcc = (char *)src;
	if (!srcc && !destt)
		return (NULL);
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}
