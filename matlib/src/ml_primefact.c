#include "../inc/matlib.h"

static int	*_addprime(int *arr, int pr)
{
	static int	sz = 0;
	int		*narr, i = 0;

	sz++;
	narr = (int *)malloc(szof(int) * sz);
	if (!narr)
		return NULL;

	if (!arr) {
		narr[0] = pr;
		return narr;
	}

	for (; i < sz - 1; i++)
		narr[i] = arr[i];
	narr[i] = pr;

	free(arr);
	return narr;
}

int	*ml_primefact(long int nbr)
{
	int	pr = ml_getnprime();
	int	*parr = NULL;

	while (nbr != 1) {
		if (nbr % pr == 0) {
			parr = _addprime(parr, pr);
			nbr /= pr;
		}
		else
			pr = ml_getnprime();
	}

	return parr;
}

