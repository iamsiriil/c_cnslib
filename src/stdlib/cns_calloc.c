#include "../inc/ml_stdlib.h"

void	*ml_calloc(size_t nm, size_t sz) {

	void *pt = malloc(nm * sz);
	if (!pt) return NULL;

	ml_bzero(pt, nm * sz);

	return pt;
}

