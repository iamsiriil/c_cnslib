#include "strlib.h"

char	*st_strjoin(char const *s1, char const *s2)
{
	int	len = st_strlen(s1) + st_strlen(s2);
	char	*str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return NULL;
	int	i = 0;
	while (s1[i]) {
		str[i] = s1[i];
		i++;
	}
	int	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return &str[0];
}

