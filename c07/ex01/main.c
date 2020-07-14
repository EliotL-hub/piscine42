#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int	main(int argc, char *argv[])
{
	(void)argc;
	int i = -1;
	int *res = ft_range(atoi(argv[1]), atoi(argv[2]));
	
	while (++i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d \n", res[i]);
	}
	free(res);
	return(0);
}
