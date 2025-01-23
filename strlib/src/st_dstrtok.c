#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "strlib.h"

static int	st_isdelim(const char *delim, char c)
{
	while (*delim) {
		if (c == *delim)
			return (1);
		delim++;
	}
	return (0);
}

static char	*st_substr(const char *start, int len)
{
	char	*new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);

	char	*ptr = new_str;
	while(len--)
		*new_str++ = *start++;
	*new_str = '\0';
	return (ptr);
}

char	*st_dstrtok(char *str, const char *delim)
{
	static char	*start = NULL;
	char		*end, *sub_str = NULL;
	int		token_len;

	if (str != NULL) {
		start = str;
		end = start;
	}
	end = start;
	do {
		token_len = 0;
		while (*end && (st_isdelim(delim, *end) == 0)) {
			end++;
			token_len++;
		}
		if (token_len > 0) {
			sub_str = st_substr(start, token_len);
			if (!sub_str) {
				perror("Malloc");
				exit(EXIT_FAILURE);
			}
			start = end;
			break;
		}	
		while(*end && (st_isdelim(delim, *end) == 1)) {
			end++;
		}
		if (*end == '\0')
			return (NULL);
		start = end;
	} while (*start);
	return (sub_str);
}

