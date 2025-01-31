#include "../inc/cns_typlib.h"

int	cns_isalpha(int c) {

	return ((c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z'));
}

