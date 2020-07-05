#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char *src = "aaa";
	char dest1[10]= "bbb";
	char dest2[10]= "ccc";
	unsigned int nb = 2;

	printf("src: %s, dest1: %s\n", src, dest1);
	printf("new dest1: %s\n", strncat(dest1, src, nb));

	printf("src: %s, dest2: %s\n", src, dest2);
	printf("new dest2: %s\n", ft_strncat(dest2, src, nb));
	
	return(0);
}
