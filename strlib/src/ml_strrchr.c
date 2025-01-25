#include "stdlib.h"

char	*ml_strrchr(const char *s, int c) {

	const char	*ptr = s;

	while (*s != '\0') s++;

	do { if (*s == (uchar)c) return (char *)s;
	} while (s-- != ptr);

	return NULL;
}

