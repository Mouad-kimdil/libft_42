#include "mylibrary.h"

char	*my_strrchr(const char *str, int c)
{
	size_t	i;

	i = my_strlen(str) + 1;
	while (i > 0)
	{
		i--;
		if ((char)str[i] == (char)c)
			return ((char *)str + i);
	}
	return (NULL);
}
