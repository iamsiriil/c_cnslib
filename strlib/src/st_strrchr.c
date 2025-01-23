#include "stdlib.h"

char	*st_strrchr(const char *s, int c)
{
	const char	*ptr = s;

	while (*s != '\0')
		s++;

	do {
		if (*s == (unsigned char)c)
			return (char *)s;
	} while (s-- != ptr);

	return NULL;
}

