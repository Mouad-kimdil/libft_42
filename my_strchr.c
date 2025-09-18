#include "mylibrary.h"

char	*my_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i < my_strlen(s) + 1)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
