#include "../inc/ml_strlib.h"

int	ml_memcmp(const void *s1, const void *s2, size_t n) {

	for (size_t i = 0; i < n; i++) {
		if (((uchar *)s1)[i] != ((uchar *)s2)[i])
			return (((uchar *)s1)[i] - ((uchar *)s2)[i]);
	}

	return 0;
}

