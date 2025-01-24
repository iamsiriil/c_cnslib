#include "../inc/ml_strlib.h"

char	*ml_strchr(const char *s, int c) {

	do {
		if (*s == (uchar)c)
			return ((char *)s);
	} while (*s++);

	return NULL;
}

