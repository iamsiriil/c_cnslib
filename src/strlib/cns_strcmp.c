#include "../inc/cns_strlib.h"

int	cns_strcmp(const char *s1, const char *s2) {

	for (;(*s1 == *s2) && *s1 && *s2; s1++, s2++) ;

	return (uchar)*s1 - (uchar)*s2;
}

