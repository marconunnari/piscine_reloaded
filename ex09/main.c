#include <stdio.h>

void	ft_ft(int *nbr);

int		main()
{
	int n = 57;
	printf("%d ", n);
	ft_ft(&n);
	printf("%d\n", n);
}
