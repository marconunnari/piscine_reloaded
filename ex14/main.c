#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb);

int	main(int argc, char **argv)
{
	(void)argc;
	int a = atoi(argv[1]);
	int b = ft_sqrt(a);
	printf("sqrt(%d) = %d \n", a, b);
}
