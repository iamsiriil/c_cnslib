#include "strlib.h"

void	*st_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst || !src)
		return NULL;

	for (size_t i = 0; i < n; i++)
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];

	return dst;
}
