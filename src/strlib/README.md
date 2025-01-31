# String Library <a href=https://github.com/iamsiriil><img src=https://github.com/iamsiriil/iamsiriil/blob/main/homepage-icon-png.png align="right" width="25"></a>

## Custom implementation of functions found in the C Standard Library:


<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

### [bzero](https://github.com/iamsiriil/c_myclib/wiki/bzero)

The function bzero clears a block of memory of size n, pointed to by *s, by filling it with zeros.

```c
void  cns_bzero(void *s, size_t n);
```
 <div align="right"><p><a href="https://github.com/iamsiriil/c_myclib/blob/master/strlib/src/cns_bzero.c">source</a> | <a href="https://linux.die.net/man/3/bzero">reference page</a></p></div>
<hr>

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

### [memchr](https://github.com/iamsiriil/c_myclib/wiki/memchr)

The function memchr, searches the fist $$n$$ bites of string s for character c. It either returns a void pointer to the first instance of c, or NULL, if the character is not found.

```c
void  cns_memchr(const void *s, int c, size_t n);
```
 <div align="right"><p><a href="https://github.com/iamsiriil/c_myclib/blob/master/strlib/src/cns_memchr.c">source</a> | <a href="https://linux.die.net/man/3/memchr">reference page</a></p></div>
<hr>

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

### [memcmp](https://github.com/iamsiriil/c_myclib/wiki/memcmp)

Memcmp compares the first $$n$$ bites, pointed to by s1 and s2. In case the data stored in both memory locations is equal, the function returns 0, otherwise it return the difference of $$s1 - s2$$.

```c
int  cns_memcmp(const void *s1, const void *s2, size_t n);
```
<div align="right"><p><a href="https://github.com/iamsiriil/c_myclib/blob/master/strlib/src/cns_memcmp.c">source</a> | <a href="https://www.man7.org/linux/man-pages/man3/memcmp.3.html">reference page</a></p></div>
<hr>

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

### [memcpy](https://github.com/iamsiriil/c_myclib/wiki/memcpy)

Memcpy copies $$n$$ bites from memory block pointed to bt src, to dst.

```c
void  cns_memcpy(void *dst, const void *src, size_t n);
```

<div align="right"><p><a href="https://github.com/iamsiriil/c_myclib/blob/master/strlib/src/cns_memcpy.c">source</a> | <a href="https://www.man7.org/linux/man-pages/man3/memcpy.3.html">reference page</a></p></div>
<hr>

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

```c
void  cns_memmove(void *dst, const void *src, size_t n);
```

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

```c
void  cns_memset(void *s, int c, size_t n):
```

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

```c
char  cns_strchr(const char *s, int c);
```

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

```c
char  cns_strrchr(const char *s, int c);
```

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

```c
int  cns_strcmp(const char *s1, const char *s2);
```

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

```c
int  cns_strncmp(const char *s1, const char *s2, size_t n);
```

<!------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>

<a href=https://github.com/iamsiriil><img src=https://github.com/iamsiriil/iamsiriil/blob/main/homepage-icon-png.png align="right" width="25"></a>
