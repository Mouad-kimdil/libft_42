#include "mylibrary.h"

void	my_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		my_putchar_fd('-', fd);
		n *= -1;
		my_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		my_putnbr_fd((n / 10), fd);
		my_putnbr_fd((n % 10), fd);
	}
	else 
		my_putchar_fd((n + 48), fd);
}
