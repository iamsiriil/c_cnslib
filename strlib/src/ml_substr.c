#include "../inc/ml_strlib.h"

char    *ml_substr(const char *str, unsigned int start, size_t len)
{
    char	*new_str = malloc(sizeof(char) * (len + 1));

    if (!new_str)
        return NULL;

    int	i = start - 1;
    int	j = 0;
    while (len--)
        new_str[j++] = str[i++];
    new_str[j] = '\0';

    return new_str;
}

