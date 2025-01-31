#include "../inc/cns_strlib.h"

char	*cns_strjoin(char const *s1, char const *s2) {

	int	ln = cns_strln(s1) + cns_strln(s2);
	char	*s = malloc(sizeof(char) * (ln + 1));
	if (!s) return NULL;

	int	i = 0;
	for (; s1[i] != '\0'; i++)
		s[i] = s1[i];

	int	j = 0;
	for (; s2[j] != '\0'; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';

	return &s[0];
}

