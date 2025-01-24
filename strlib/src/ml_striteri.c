#include "../inc/ml_strlib.h"

void	ml_striteri(char *s, void (*f)(unsigned int, char*)) {

	if (!s) return ;

	unsigned int	i;

	for (i = 0; s[i] != '\0'; i++)
		f(i, &s[i]);
}

