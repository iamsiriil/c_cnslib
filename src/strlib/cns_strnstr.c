#include "../inc/cns_strlib.h"

char	*cns_strnstr(const char *bg, const char *lt, size_t ln) {

	if (*lt == '\0') return (char *)bg;

	if (*bg == '\0' || ln == 0) return NULL;

	size_t	i = 0, j;
	for (; bg[i] && ln > i; i++) {
		j = 0;
		for (; lt[j] && (bg[i + j] == lt[j]) && ((i + j) < ln)); ++j) ;

		if (lt[j] == '\0') return (char *)&bg[i];
	}

	return NULL;
}

