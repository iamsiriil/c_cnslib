#include "../inc/cns_strlib.h"

void	cns_striteri(char *s, void (*f)(unsigned int, char*)) {

	if (!s) return ;

	unsigned int	i;

	for (i = 0; s[i] != '\0'; i++)
		f(i, &s[i]);
}

