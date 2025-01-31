#include "../inc/cns_strlib.h"

static int	_isinset(char c, const char *st) {

	for (; *st != '\0'; st++) {
		if (c == *st) return 1;
	}

	return 0;
}

char	*cns_strtrim(const char *s, const char *set) {

	size_t	st = 0, ln = cns_strln(s) - 1;
	
	while (_isinset(s[st], set)) st++;

	while (_isinset(s[ln], set)) ln--;

	ln -= st;
	char *ns = cns_substr(s, (st + 1), (ln + 1));

	return ns;
}

