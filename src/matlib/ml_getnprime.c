#include "../../inc/cns_matlib.h"

int	ml_getnprime(void)
{
	static int	n = 0;

	for (; ml_isprime(n); n++) ;

	return n;
}

