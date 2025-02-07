#include "../../inc/cns_typlib.h"

int	cns_toupper(int c) {

	return (c >= 'a' && c <= 'z') ? c &= '_' : c;
}

