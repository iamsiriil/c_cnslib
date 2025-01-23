#include "strlib.h"

static size_t	st_strlen(const char *s)
{
	size_t i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

char	*st_strdup(const char *s)
{
	char	*new_str = malloc(st_strlen(s) + 1);
	if (!new_str)
		return NULL;

	int	i = 0;
	while (s[i] != '\0') {
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';

	return new_str;
}

