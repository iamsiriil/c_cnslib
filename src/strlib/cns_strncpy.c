#include "../inc/cns_strlib.h"

char	*cns_strncpy(char *dst, const char *src, size_t n) {

	size_t	i = 0;

	for (; src[i] != '\0' && i < n; i++)
		dst[i] = src[i];

	for (;i < n; i++)
		dst[i] = '\0';

	return dst;
}

