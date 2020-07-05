#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *str1 = "d";
	char *str2 = "";

	printf("str1: %s\nstr2: %s\nresult: %d\n", str1, str2, strcmp(str1, str2));
	printf("str1: %s\nstr2: %s\nresult: %d\n", str1, str2, ft_strcmp(str1, str2));
	return (0);
}
