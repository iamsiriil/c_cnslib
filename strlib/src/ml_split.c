#include "../inc/ml_strlib.h"

static size_t	_countstr(char const *s, char c) {

	size_t	ct = 0;

	while (*s) {
		if (*s && (*s != c)) {
			ct++;
			while (*s && (*s != c)) ++s;
		}
		while (*s && (*s == c)) ++s;
	}

	return ct;
}

static void	_getstr(char const *s, char c, char **sp) {

	size_t	i = 0;
	size_t	ln, st;

	while (s[i]) {
		if (s[i] != c) {
			st = i;
			ln = 0;
			while (s[i] && s[i] != c) {
				i++;
				ln++;
			}
			*sp = ml_substr(s, st, ln);
			sp++;
		}
		else i++;
	}
	*sp = NULL;
}

char	**ml_split(char const *s, char c) {
	
	size_t ln = _countstr(s, c);

	char	**sp = malloc(sizeof(char **) * (ln + 1));
	if (!sp) return NULL;

	if (ln > 0) _getstr(s, c, sp);

	else sp[0] = NULL;

	return sp;
}

