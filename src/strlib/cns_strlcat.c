#include "../inc/ml_strlib.h"

size_t	ml_strlcat(char *dst, const char *src, size_t sz) {

	size_t	dsz = ml_strlen(dst);
	size_t	ssz = ml_strlen(src);

	if (sz <= dsz) return ssz + sz;

	size_t	i = 0;
	for (; src[i] && (dsz + i) < sz - 1; i++)
		dst[dsz + i] = src[i];
	dst[dsz + i] = '\0';

	return dsz + ssz;
}

