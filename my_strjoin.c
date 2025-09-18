#include "mylibrary.h"

char	*my_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*ptr;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = my_strlen((char *)s1) + my_strlen((char *)s2) + 1;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
