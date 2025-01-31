#ifndef CNS_STRLIB_H
# define CNS_STRLIB_H

# include <stdlib.h>

typedef unsigned char uchar;

void	cns_bzero(void *s, size_t n);
void	*cns_memchr(const void *s, int c, size_t n);
int	cns_memcmp(const void *s1, const void *s2, size_t n);
void	cns_memcpy(void *dst, const void *src, size_t n);
void	cns_memmove(void *dst, const void *src, size_t n);
void	cns_memset(void *s, int c, size_t n);


char	*cns_strchr(const char *s, int c);
char	*cns_strrchr(const char *s, int c);

int	cns_strcmp(const char *s1, const char *s2);
int	cns_strncmp(const char *s1, const char *s2, size_t n);

char	*cns_strcpy(char *dst, const char *src);
char	*cns_strncpy(char *dst, const char *src, size_t n);

char	*cns_strstr(const char *hs, const char *nd);
char	*cns_strnstr(const char *bg, const char *lt, size_t ln);

char	*cns_strdup(const char *s);
size_t	cns_strlcat(char *dst, const char *src, size_t sz);
size_t	cns_strlcpy(char *dst, const char *src, size_t sz);
size_t	cns_strlen(const char *s);

char	*cns_dstrtok(char *s, const char *dl);

char	**cns_split(char const *s, char c);
char	*cns_strjoin(char const *s1, char const *s2);
char	*cns_strtrim(const char *s, const char *set);
char	*cns_substr(const char *s, unsigned int st, size_t ln);

void	cns_striteri(char *s, void (*f)(unsigned int, char*));
char	*cns_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
