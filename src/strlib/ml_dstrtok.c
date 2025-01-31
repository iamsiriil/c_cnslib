#include "../inc/ml_../inc/ml_strlib.h"

/*
 * ml_dstrtok is a custom version that broadly imitates the
 * original strtok function, present in string.h, but using
 * dynamic memory allocation.
 */

static int	_isdelim(const char *dl, char c) {

	for (; *dl; dl++) {
		if (c == *dl) return 1;

	return 0;
}

static char	*_substr(const char *st, int ln) {

	char	*s = (char *)malloc(ln + 1);
	if (!s) return NULL;

	char	*pt = s;
	while(ln--)
		*s++ = *st++;
	*s = '\0';

	return pt;
}

char	*ml_dstrtok(char *s, const char *dl) {

	static char	*st = NULL;
	char		*en, *ss = NULL;
	int		tl;

	if (s != NULL) {
		st = s;
		en = st;
	}
	en = st;

	do {
		tl = 0;
		while (*en && (_isdelim(dl, *en) == 0)) {
			en++;
			tl++;
		}

		if (tl > 0) {
			ss = _substr(st, tl);
			if (!ss) exit(EXIT_FAILURE);
			st = en;
			break;
		}	

		while(*en && (_isdelim(dl, *en) == 1))
			en++;

		if (*en == '\0') return NULL;
		st = en;
	} while (*st);

	return ss;
}

