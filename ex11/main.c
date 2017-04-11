#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int t = 98;
	int n = 57;
	int div = 0;
	int mod = 0;
	ft_div_mod(t, n, &div, &mod);
	printf("%d : %d = %d r %d\n", t, n, div, mod);
}
