#include "../inc/cns_strlib.h"

char	*cns_strdup(const char *s) {

	char	*ns = malloc(cns_strlen(s) + 1);
	if (!ns) return NULL;

	int	i = 0;
	for (i = 0; s[i] != '\0'; i++)
		ns[i] = s[i];
	ns[i] = '\0';

	return ns;
}

