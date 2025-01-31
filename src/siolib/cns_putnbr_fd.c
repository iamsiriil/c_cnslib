#include "../inc/stdlib.h"

void	cns_putnbr_fd(int n, int fd)
{
	if (n == -2147483648) {
		cns_putchar_fd('-', fd);
		cns_putchar_fd('2', fd);
		cns_putnbr_fd(147483648, fd);
	}
	else if (n < 0) {
		cns_putchar_fd('-', fd);
		cns_putnbr_fd(-n, fd);
	}
	else if (n > 9) {
		cns_putnbr_fd((n / 10), fd);
		cns_putnbr_fd((n % 10), fd);
	}
	else
		cns_putchar_fd((n + '0'), fd);
}

