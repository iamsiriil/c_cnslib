# strlib <a href=https://github.com/iamsiriil><img src=https://github.com/iamsiriil/iamsiriil/blob/main/homepage-icon-png.png align="right" width="25"></a>

## Custom implementation of functions found in the C Standard Library:

### [bzero](https://github.com/iamsiriil/c_myclib/wiki/bzero)

The function bzero clears a block of memory of size n, pointed to by *s, by filling it with zeros.

```c
void  ml_bzero(void *s, size_t n);
```
 <div align="right"><p><a href="https://github.com/iamsiriil/c_myclib/blob/master/strlib/src/ml_bzero.c">source</a> | <a href="https://linux.die.net/man/3/bzero">reference page</a></p></div>

<hr>

### [memchr](https://github.com/iamsiriil/c_myclib/wiki/memchr)

The function memchr, searches the fist n bites of string s for character c. It either returns a void pointer to the first instance of c, or NULL, if the character is not found.

```c
void  ml_memchr(const void *s, int c, size_t n);
```
 <div align="right"><p><a href="https://github.com/iamsiriil/c_myclib/blob/master/strlib/src/ml_memchr.c">source</a> | <a href="https://linux.die.net/man/3/memchr">reference page</a></p></div>

<hr>

### [memcmp](https://github.com/iamsiriil/c_myclib/wiki/memchr)

Memcmp compares two blocks os memory pointed to by pointers s1 and s2, until the n^th bite.
```c
int  ml_memcmp(const void *s1, const void *s2, size_t n);
```

```c
void  ml_memcpy(void *dst, const void *src, size_t n);
```

```c
void  ml_memmove(void *dst, const void *src, size_t n);
```

```c
void  ml_memset(void *s, int c, size_t n):
```

```c
char  ml_strchr(const char *s, int c);
```

```c
char  ml_strrchr(const char *s, int c);
```

```c
int  ml_strcmp(const char *s1, const char *s2);
```

```c
int  ml_strncmp(const char *s1, const char *s2, size_t n);
```

<a href=https://github.com/iamsiriil><img src=https://github.com/iamsiriil/iamsiriil/blob/main/homepage-icon-png.png align="right" width="25"></a>
