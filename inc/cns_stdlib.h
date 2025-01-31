#ifndef CNS_STDLIB_H
#define CNS_STDLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

void	*cns_calloc(size_t nm, size_t sz);
double	cns_atod(const char *np);
double	cns_atoi(const char *s);
char	*cns_itoa(int n);

#endif
