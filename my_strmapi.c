#include "mylibrary.h"

char	*my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	int		i;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	size = my_strlen(s);
	ptr = (char *)malloc(sizeof(char ) * size + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
