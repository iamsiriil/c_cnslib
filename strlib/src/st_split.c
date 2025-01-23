#include "strlib.h"

static size_t	str_count(char const *s, char c)
{
	size_t	ct = 0;

	while (*s) {
		if (*s && (*s != c)) {
			ct++;
			while (*s && (*s != c))
				++s;
		}
		while (*s && (*s == c))
			++s;
	}
	return ct;
}

static void	get_str(char const *s, char c, char **split)
{
	size_t	i = 0;
	size_t	len, start;

	while (s[i]) {
		if (s[i] != c) {
			start = i;
			len = 0;
			while (s[i] && s[i] != c) {
				i++;
				len++;
			}
			*split = st_substr(s, start, len);
			split++;
		}
		else
			i++;
	}
	*split = NULL;
}

char	**st_split(char const *s, char c)
{	
	size_t len = str_count(s, c);

	char	**split;
	split = (char **)malloc(sizeof(char **) * (len + 1));
	if (!split)
		return NULL;
	if (len > 0) {
		get_str(s, c, split);
	}
	else
		split[0] = NULL;
	return split;
}

