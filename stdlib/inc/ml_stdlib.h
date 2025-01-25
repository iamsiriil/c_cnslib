#ifndef ML_STDLIB_H
#define ML_STDLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

void	*ml_calloc(size_t nm, size_t sz);
double	ml_atod(const char *np);
double	ml_atoi(const char *s);
char	*ml_itoa(int n);

#endif
