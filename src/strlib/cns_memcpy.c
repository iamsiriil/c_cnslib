#include "../inc/cns_strlib.h"

void	*cns_memcpy(void *dst, const void *src, size_t n) {

	if (!dst || !src) return NULL;

	for (size_t i = 0; i < n; i++)
		((uchar *)dst)[i] = ((const uchar *)src)[i];

	return dst;
}

