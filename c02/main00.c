#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[10] = "aaaaaaaaa";
	char dest2[10] = "bbbbbbbbb";
	char src[]= "azerty";

	printf("src: %s dest: %s\n", src, dest);
	printf("dest: %s\n", strcpy(dest, src));
	printf("src: %s dest: %s\n", src, dest2);
	printf("dest: %s\n", ft_strcpy(dest2, src));
}
