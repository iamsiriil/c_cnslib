#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static int	sd_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	sd_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

double	sd_strtod(const char *nptr)
{
	while (sd_isspace(*nptr)) nptr++;

	if (*nptr == '-' || *nptr == '+') {

		int	bs = (*nptr == '-') ? -1 : 1;
		nptr++;
	}

	double	base = 0.0;
	for (;sd_isdigit(*nptr); nptr++)
		base = base * 10 + (*nptr - 48);

	if (*nptr == '.')
		nptr++;
	int	div = 1;
	while (sd_isdigit(*nptr))
	{
		base = base * 10 + (*nptr - 48);
		div *= 10;
		nptr++;
	}
	base /= div;
	base *= bs;
	if (*nptr == 'e' || *nptr == 'E')
		nptr++;
	int	expn_sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			expn_sign *= -1;
		nptr++;
	}
	double expn = 0.0;
	while (sd_isdigit(*nptr))
	{
		expn = expn * 10 + (*nptr -48);
		nptr++;
	}
	expn = pow(10, (expn * expn_sign));
	return (base * expn);
}

