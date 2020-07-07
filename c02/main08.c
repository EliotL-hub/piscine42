#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "Fes2!fhreERG";

	printf("%s\n", str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
