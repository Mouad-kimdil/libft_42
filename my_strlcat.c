#include "mylibrary.h"
#include <string.h>

size_t	my_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	i = 0;
	dlen = my_strlen(dest);
	slen = my_strlen((char *)src);
	j = dlen;
	if (dstsize < dlen || dstsize == 0)
		return (dstsize + slen);
	while (j < dstsize - 1 && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
