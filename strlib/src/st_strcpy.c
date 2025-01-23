#include "strlib.h"

char	*st_strcpy(char *dst, const char *src)
{
	for (size_t i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
	dst[i] = '\0';

	return dst;
}

