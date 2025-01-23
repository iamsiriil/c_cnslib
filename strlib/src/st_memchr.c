#include "strlib.h"

void	*st_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	for (i = 0; i < n; i++) {
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (void *)(s + i);
	}
	return NULL;
}

