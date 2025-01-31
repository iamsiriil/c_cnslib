#include "../inc/cns_strlib.h"

char    *cns_strstr(const char *hs, const char *nd) {

	if (nd[0] == '\0') return (char *)hs;

	if (hs[0] == '\0') return NULL;

	for (int i = 0; hs[i] != '\0'; i++) {
		for (int j = 0; (hs[i + j] == nd[j]) && nd]j]; j++) {
			if (nd[j + 1] == '\0')
				return ((char *)&hs[i]);
		}
	}

	return NULL;
}

