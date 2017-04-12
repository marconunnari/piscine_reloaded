#include <stdlib.h>
#include <stdio.h>
#include "ft_abs.h"

int		main(int argc, char **argv)
{
	(void)argc;
	int x = atoi(argv[1]);
	printf("abs(%d) = %d\n", x, ABS(x));
}
