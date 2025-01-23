#include "strlib.h"

void	st_striteri(char *s, void (*f)(unsigned int, char*))
{
	if (!s) return ;

	unsigned int	i = 0;
	while (s[i]) {
		f(i, &s[i]);
		i++;
	}
}

