#include "../inc/stdlib.h"

void	sd_putstr_fd(char *s, int fd)
{
	for (; *s != '\0'; s++)
		write(fd, s, 1);
}

