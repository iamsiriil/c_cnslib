#include "../../inc/cns_matlib.h"

int	cns_getnprime(void)
{
	static int	n = 0;

	for (; cns_isprime(n); n++) ;

	return n;
}
This is a test!
