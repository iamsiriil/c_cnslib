# strlib <a href=https://github.com/iamsiriil><img src=https://github.com/iamsiriil/iamsiriil/blob/main/homepage-icon-png.png align="right" width="25"></a>


##### Custom implementation of functions found in the C Standard Library:

```c
void  ml_bzero(void *s, size_t n);
```

```c
void  ml_memchr(const void *s, int c, size_t n);
```
<div align="right">
  <p>
    <a href="https://github.com/iamsiriil/c_myclib/blob/master/strlib/src/ml_memchr.c">source
    </a> | 
    <a href="https://linux.die.net/man/3/memchr">
    reference page
    </a>
  </p>
</div>

---

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
