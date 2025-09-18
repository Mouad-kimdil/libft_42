#include "mylibrary.h"

void	*my_memmove(void *dest, const void *src, size_t len)
{
	char	*destt;
	char	*srcc;

	destt = (char *)dest;
	srcc = (char *)src;
	if (srcc < destt)
	{
		while (len > 0)
		{
			destt[len - 1] = srcc[len - 1];
			len--;
		}
	}
	else
		my_memcpy(dest, src, len);
	return (dest);
}
