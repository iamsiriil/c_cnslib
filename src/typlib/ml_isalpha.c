#include "../inc/ml_typlib.h"

int	ml_isalpha(int c) {

	return ((c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z'));
}

