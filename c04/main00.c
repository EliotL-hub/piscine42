#include <stdio.h>

int ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	(void)argc;
	char *str = argv[1];

	printf("str: %s, result: %d\n", str, ft_strlen(str));
	return(0);
}
