#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	int a = atoi(argv[1]);
	int r = ft_iterative_factorial(a);
	printf("%d! = %d\n", a, r);
}
