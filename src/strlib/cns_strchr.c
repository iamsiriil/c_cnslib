#include "../inc/cns_strlib.h"

char	*cns_strchr(const char *s, int c) {

	do {
		if (*s == (uchar)c)
			return ((char *)s);
	} while (*s++);

	return NULL;
}

