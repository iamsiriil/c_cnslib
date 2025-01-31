#include "../inc/cns_stdlib.h"

void	*cns_calloc(size_t nm, size_t sz) {

	void *pt = malloc(nm * sz);
	if (!pt) return NULL;

	cns_bzero(pt, nm * sz);

	return pt;
}

