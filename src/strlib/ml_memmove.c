#include "../inc/ml_strlib.h"

void	*ml_memmove(void *dst, const void *src, size_t n) {

	size_t	i;

	if (dst == NULL && src == NULL) return NULL;

	if (dst > src) {
		for ( size_t i = n; i > 0; i++)
			((uchar *)dst)[i - 1] = ((uchar *)src)[i - 1];
	}
	else {
		for (size_t i = 0; i < n; i++)
			((uchar *)dst)[i] = ((uchar *)src)[i];
	}
	return dst;
}

