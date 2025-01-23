#include "strlib.h"

char	*st_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i, j;

	if (*little == '\0')
		return (char *)big;
	if (*big == '\0' || len == 0)
		return NULL;
	i = 0;
	while (big[i] && len > i) {
		j = 0;
		while (little[j] && (big[i + j] == little[j]) && ((i + j) < len))
			++j;
		if (little[j] == '\0')
			return (char *)&big[i];
		i++;
	}
	return NULL;
}

