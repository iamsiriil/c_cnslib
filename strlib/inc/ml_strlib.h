#ifndef ML_STRLIB_H
# define ML_STRLIB_H

# include <stdlib.h>

typedef unsigned char uchar;

char	*ml_dstrtok(char *s, const char *dl);
void	ml_bzero(void *s, size_t n);
void	ml_memchr(const void *s, int c, size_t n);
int	ml_memcmp(const void *s1, const void *s2, size_t n);
void	ml_memcpy(void *dst, const void *src, size_t n);
void	ml_memmove(void *dst, const void *src, size_t n);
void	ml_memset(void *s, int c, size_t n);
char	**ml_split(char const *s, char c);
char	*ml_strchr(const char *s, int c);
int	ml_strcmp(const char *s1, const char *s2);
char	*ml_strcpy(char *dst, const char *src);
char	*ml_strdup(const char *s);
void	ml_striteri(char *s, void (*f)(unsigned int, char*));
char	*ml_strjoin(char const *s1, char const *s2);
size_t	ml_strlcat(char *dst, const char *src, size_t sz);
size_t	ml_strlcpy(char *dst, const char *src, size_t sz);
size_t	ml_strlen(const char *s);
char	*ml_strmapi(char const *s, char (*f)(unsigned int, char));
int	ml_strncmp(const char *s1, const char *s2, size_t n);
char	*ml_strncpy(char *dst, const char *src, size_t n);
char	*ml_strnstr(const char *bg, const char *lt, size_t ln);
char	*ml_strrchr(const char *s, int c);
char	*ml_strstr(const char *hs, const char *nd);
char	*ml_strtrim(const char *s, const char *set);
char	*ml_substr(const char *s, unsigned int st, size_t ln);

#endif
