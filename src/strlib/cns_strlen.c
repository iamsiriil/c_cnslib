#include "stdlib.h"

size_t	cns_strlen(const char *s) {

	size_t	i = 0;

	while (s[i] != '\0') i++;

	return i;
}

