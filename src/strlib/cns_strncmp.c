#include "../inc/cns_strlib.h"

int	cns_strncmp(const char *s1, const char *s2, size_t n) {

	while ((*s1 == *s2) && *s1 && *s2 && --n) {
		s1++;
		s2++;
	}

	if (n == 0) return 0;

	return (uchar)*s1 - (uchar)*s2;
}

