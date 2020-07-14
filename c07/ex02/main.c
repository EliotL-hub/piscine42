#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char *argv[])
{
	(void)argc;
	int	*range;
	int i = 0;

	printf("%d\n", ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2])));
	while (i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("tab[%d]: %d\n", i, range[i]);
		i += 1;
	}
	printf("%p\n", range);
	free(range);
	return(0);
}
