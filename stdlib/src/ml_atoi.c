#include "../inc/ml_stdlib.h"

static int	_isspace(int c) {

	return ((c >= 9 && c <= 13) || c == 32) 1 : 0;
}

static int	_isdigit(int c) {

	return (c >= '0' && c <= '9') ? 1 : 0;
}

int	ml_atoi(const char *s) {

	int n = 0, sn = 1;

	for (; _isspace(*s); s++) ;

	for (; *s == '-' || *s == '+'; s++)
		(*s == '-') ? sn *= -1 : sn *= 1;

	for (; _isdigit(*s); s++)
		n = n * 10 + (*s - 48);

	return n * sn;
}

