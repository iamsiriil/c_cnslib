#include "../inc/cns_strlib.h"

size_t	cns_strlcat(char *dst, const char *src, size_t sz) {

	size_t	dsz = cns_strlen(dst);
	size_t	ssz = cns_strlen(src);

	if (sz <= dsz) return ssz + sz;

	size_t	i = 0;
	for (; src[i] && (dsz + i) < sz - 1; i++)
		dst[dsz + i] = src[i];
	dst[dsz + i] = '\0';

	return dsz + ssz;
}

