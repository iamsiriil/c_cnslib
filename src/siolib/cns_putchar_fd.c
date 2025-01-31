#include "../inc/stdlib.h"

void	cns_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

