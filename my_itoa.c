#include "mylibrary.h"

int	my_len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*my_itoa(int nb)
{
	char	*ptr;
	int		len;
	long	i;

	i = nb;
	len = my_len(i);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (i == 0)
		ptr[0] = '0';
	if (i < 0)
	{
		i = -i;
		ptr[0] = '-';
	}
	while (i)
	{
		len--;
		ptr[len] = 48 + (i % 10);
		i /= 10;
	}
	return (ptr);
}
