#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index);

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", ft_fibonacci(atoi(argv[1])));
}
