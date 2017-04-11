#include <stdio.h>

int 	ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	(void)argc;
	char *s1 = argv[1];
	char *s2 = argv[2];
	int r = ft_strcmp(s1, s2);
	printf("%d \n", r);
}
