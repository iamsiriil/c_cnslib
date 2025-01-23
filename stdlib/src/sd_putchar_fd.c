#include "../inc/stdlib.h"

void	sd_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

