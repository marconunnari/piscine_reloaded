#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	(void)argc;
	int *res = ft_range(atoi(argv[1]), atoi(argv[2]));
	int len = (atoi(argv[2]) - atoi(argv[1]));
	if (res == NULL)
		printf("NULL");
	else
		for(int i = 0; i < len; i++)
			printf("%d, ", res[i]);
	printf("\n");
}
