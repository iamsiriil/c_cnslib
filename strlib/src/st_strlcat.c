#include "strlib.h"

size_t	st_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dsize = st_strlen(dst);
	size_t	ssize = st_strlen(src);
	if (size <= dsize)
		return ssize + size;
	size_t	i = 0;
	while (src[i] && (dsize + i) < size - 1) {
		dst[dsize + i] = src[i];
		i++;
	}
	dst[dsize + i] = '\0';
	return dsize + ssize;
}

