#include "../../inc/cns_typlib.h"

int	cns_tolower(int c) {

	return ( c >= 'A' && c <= 'Z') ? c |= ' ' : c;
}

