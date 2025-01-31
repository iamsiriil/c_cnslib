#include "../inc/cns_strlib.h"

void	*cns_memset(void *s, int c, size_t n) {

	for (size_t i = 0; i < n; i++)
		((uchar *)s)[i] = c;
	
	return s;
}

