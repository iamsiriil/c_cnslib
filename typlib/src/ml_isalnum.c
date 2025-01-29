#include "../inc/ml_typlib.h"

int	ml_isalnum(int c) {

	return ml_isalpha(c) || ml_isdigit(c);
}

