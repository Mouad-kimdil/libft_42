#include "mylibrary.h"

void	my_putendl_fd(char *s, int fd)
{
	my_putstr_fd(s, fd);
	my_putchar_fd('\n', fd);
}
