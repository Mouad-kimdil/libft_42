#include "mylibrary.h"
char	*my_strdup(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(my_strlen(str) + 1);
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

