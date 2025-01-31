#include "../inc/ml_strlib.h"

char	*ml_strjoin(char const *s1, char const *s2) {

	int	ln = ml_strln(s1) + ml_strln(s2);
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

