#include "../../inc/cns_matlib.h"

int	ml_sqrt(int nbr)
{
	if (nbr == 0)
		return 0;

	int	n;
	for (n = 1; n < nbr / n; n++) ;

	if (n * n == nbr)
		return n;

	return 0;
}

