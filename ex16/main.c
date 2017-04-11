#include <stdio.h>

int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	int r = ft_strlen(argv[1]);
	printf("%d \n", r);
}
