#include "../inc/ml_typlib.h"

int	ml_tolower(int c) {

	return ( c >= 'A' && c <= 'Z') ? c += 32 : c;
}

