#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *str);

int	main(int argc, char **argv)
{
	(void)argc;
	char *str = strcmp(argv[1], "NULL") == 0? NULL: argv[1];
	char *dup = ft_strdup(str);
	if (strlen(dup) > 0)
		dup[0] = 'A';
	printf("%s %s\n", str, dup);
}
