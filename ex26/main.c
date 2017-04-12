#include <stdio.h>

int		ft_count_if(char **tab, int(*f)(char*));

int		startwithA(char *s)
{
	if (s[0] == 'A')
		return (1);
	return (0);
}

int		main()
{
	char	*a[] = {"ciao", "core", "A", "AROMA", "aAo", 0};
	int		r = ft_count_if(a, &startwithA);
	printf("%d \n", r);
}
