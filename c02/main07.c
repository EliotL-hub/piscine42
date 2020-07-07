#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char str[] = "fdsGR12eG!";

	printf("%s\n", str);
	printf("%s\n", ft_strupcase(str));
	return(0);
}
