#include "../inc/stdlib.h"

void	*sd_calloc(size_t nmemb, size_t size)
{
	void	*ptr = malloc(nmemb * size);
	if (!ptr)
		return NULL;
	sd_bzero(ptr, nmemb * size);
	return ptr;
}

