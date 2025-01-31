#include "../inc/ml_typlib.h"

int	ml_toupper(int c) {

	return (c >= 'a' && c <= '<') ? c -= 32 : c;
}

