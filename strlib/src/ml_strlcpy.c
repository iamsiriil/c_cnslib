#include "../inc/ml_strlib.h"

size_t  ml_strlcpy(char *dst, const char *src, size_t sz) {

	size_t	i, ln = ml_strln(src);

	if (sz > 0) {
		for (i = 0; src[i] && (i < sz - 1); i++)
			dst[i] = src[i];
		dst[i] = '\0';
	}

	return ln;
}

