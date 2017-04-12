#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	printit(int a)
{
	printf("%d \n", a);
}

int		main()
{
	int tab[] = {1, 4, 7, 8};
	for (int i = 0; i < 4; i++)
		printf("%d, ", tab[i]);
	printf("\n");
	ft_foreach(tab, 4, &printit);
}
