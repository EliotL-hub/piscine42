#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	(void)argc;
	char *str = argv[1];

	printf("ATOI	str: %s, result: %d\n", str, atoi(str));
	printf("FT_ATOI	str: %s, result: %d\n", str, ft_atoi(str));

	return(0);
}
