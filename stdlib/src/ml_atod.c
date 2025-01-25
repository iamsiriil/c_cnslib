#include "../inc/ml_stdlib.h"

static int	_isdigit(int c) {

	return (c >= '0' && c <= '9') ? 1 : 0;
}

static int	_isspace(int c) {

	return ((c >= 9 && c <= 13) || c == 32) ? 1 : 0;
}

double	ml_atod(const char *np) {

	while (_isspace(*np)) np++;

	if (*np == '-' || *np == '+') {
		int bs = (*np == '-') ? -1 : 1;
		np++;
	}

	double	base = 0.0;
	for (;_isdigit(*np); np++)
		base = base * 10 + (*np - 48);

	if (*np == '.') np++;

	int dv = 1;
	for (; _isdigit(*np); dv *=10, np++)
		base = base * 10 + (*np - 48);

	base /= dv;
	base *= bs;
	if (*np == 'e' || *np == 'E') np++;

	int exs = 1;				// exponent sign
	if (*np == '-' || *np == '+') {
		if (*np == '-') exs *= -1;
		np++;
	}

	double ex = 0.0;			// exponent
	for (; _isdigit(*np); np++)
		ex = ex * 10 + (*np -48);

	ex = pow(10, (ex * exs));

	return base * ex;
}

