#include "../inc/stdlib.h"

static int	sd_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32) 1 : 0;
}

static int	sd_isdigit(int c)
{
	return (c >= '0' && c <= '9') ? 1 : 0;
}

int	sd_atoi(const char *str)
{
	int	nbr = 0, sign = 1;

	for (; sd_isspace(*str); str++) ;

	for (; *str == '-' || *str == '+'; str++)
		(*str == '-') ? sign *= -1 : sign *= 1;

	for (; sd_isdigit(*str); str++)
		nbr = nbr * 10 + (*str - 48);

	return nbr * sign;
}

