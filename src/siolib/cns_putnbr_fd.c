#include "../inc/stdlib.h"

void	sd_putnbr_fd(int n, int fd)
{
	if (n == -2147483648) {
		sd_putchar_fd('-', fd);
		sd_putchar_fd('2', fd);
		sd_putnbr_fd(147483648, fd);
	}
	else if (n < 0) {
		sd_putchar_fd('-', fd);
		sd_putnbr_fd(-n, fd);
	}
	else if (n > 9) {
		sd_putnbr_fd((n / 10), fd);
		sd_putnbr_fd((n % 10), fd);
	}
	else
		sd_putchar_fd((n + '0'), fd);
}

