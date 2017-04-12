#include "ft_point.h"
#include <stdlib.h>
#include <stdio.h>

void	set_point(t_point *point, int x, int y)
{
        point->x = x;
        point->y = y;
}

int		main(int argc, char **argv)
{
	(void)argc;
	t_point		point;
	set_point(&point, atoi(argv[1]), atoi(argv[2]));
	printf("x = %d, y = %d\n", point.x, point.y);
	return (0);
}
