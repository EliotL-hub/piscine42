#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(int argc, char *argv[])
{
	(void)argc;
	char *str = argv[1];
	char *to_find = argv[2];

	printf("str: %s, to_find: %s\n", str, to_find);
	printf("ret: %s\n", strstr(str, to_find));

	printf("str: %s, to_find: %s\n", str, to_find);
	printf("ret: %s\n", ft_strstr(str, to_find));
	
	return(0);
}
