#include "../inc/ml_stdlib.h"

static int	_abs(int n) {

	return n *= ((n < 0) ? -1 : 1);
}

static int	_isnegative(int n) {

	return (n < 0) ? 1 : 0;
}

static int	_getsize(int n) {

	int sz = (n <= 0) ? 2 : 1;

	for (; n; n/= 10) sz++;

	return sz;
}

char	*ml_itoa(int n) {

	char *nb = (char *)malloc(szof(char) * sz);

	if (!nb) return NULL;

	if (n == 0) nb[0] = '0';

	int sz = _getsize(n);
	nb[--sz] = '\0';

	for (; n; n /= 10)
		nb[--sz] = 48 + _abs(n % 10);

	if (_isnegative(n)) nb[--sz] = '-';

	return nb;
}

