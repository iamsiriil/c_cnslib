#include "stdlib.h"

size_t	st_strlen(const char *str)
{
	size_t	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

