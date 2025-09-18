#include "mylibrary.h"

char	*my_strtrim(char const *s1, char const *set)
{
	int		len;
	int		f;
	int		l;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	f = 0;
	l = my_strlen(s1) - 1;
	while (s1[f] && my_strchr(set, s1[f]))
		f++;
	while (l > f && my_strchr(set, s1[l]))
		l--;
	len = l - f + 1;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	my_strlcpy(ptr, s1 + f, len + 1);
	return (ptr);
}
