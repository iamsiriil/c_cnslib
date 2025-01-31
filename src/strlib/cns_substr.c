#include "../inc/cns_strlib.h"

char    *cns_substr(const char *s, unsigned int st, size_t ln) {

	char *ns = malloc(sizeof(char) * (ln + 1));

	if (!ns) return NULL;

	int i = st - 1, j = 0;
	while (ln--) ns[j++] = s[i++];
	ns[j] = '\0';
	
	return ns;
}

