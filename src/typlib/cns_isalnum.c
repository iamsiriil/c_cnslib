#include "../inc/cns_typlib.h"

int	cns_isalnum(int c) {

	return cns_isalpha(c) || cns_isdigit(c);
}

