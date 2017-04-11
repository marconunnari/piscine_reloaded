#include <stdio.h>

void ft_swap(int *a, int *b);

int		main()
{
	int n = 57;
	int t = 98;
	printf("%d %d\n", n, t);
	ft_swap(&n, &t);
	printf("%d %d\n", n, t);
}
