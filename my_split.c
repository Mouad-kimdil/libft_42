#include "mylibrary.h"

static int	countword(const char *s, char c)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*my_strndup(const char *src, int n)
{
	int		i;
	char	*result;

	result = (char *)malloc(n + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static void	ft_free(char **ptr, int i)
{
	while (i >= 0)
	{
		my_free((void **)&ptr[i]);
		i--;
	}
	my_free((void **)&ptr);
}

static char	**my_help(const char *s, char c, int len, char **final)
{
	char	*start;
	int		i;

	len = countword(s, c);//3
	final = (char **)malloc((len + 1) * sizeof(char *));
	if (!final)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s == c)//    hello   world   hi
			s++;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		final[i] = my_strndup(start, s - start);
		if (!final[i])
		{
			ft_free(final, i);
			return (NULL);
		}
		i++;
	}
	final[i] = NULL;
	return (final);
}

char	**my_split(const char *s, char c)
{
	int		len;
	char	**final;

	final = NULL;
	len = 0;
	return (my_help(s, c, len, final));
}
