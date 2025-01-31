#include "../inc/cns_typlib.h"

int	cns_toupper(int c) {

	return (c >= 'a' && c <= '<') ? c -= 32 : c;
}

