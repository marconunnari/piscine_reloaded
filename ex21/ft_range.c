#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		len;
	int		i;

	if (min >= max)
		return (NULL);
	len = max - min;
	res = (int*) malloc(sizeof(int) * len);
	i = min;
	while (i < max)
	{
		res[i - min] = i; 
		i++;
	}
	return (res);
}
