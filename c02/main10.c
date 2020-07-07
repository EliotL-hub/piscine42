#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "Bonjour";
	char dest[] = "aaaaaaaaaaaa";
	char dest2[] = "bbbbbbbbbbbb";
	unsigned int size = 8;

	printf("src: %s, size: %d, dest: %s\n", src, size, dest);
	
	printf("src len: %d\n", ft_strlcpy(dest2, src, size));
	printf("src: %s, size: %d, dest: %s\n", src, size, dest2);
	
	printf("src len: %lu\n", strlcpy(dest, src, size));
	printf("src: %s, size: %d, dest: %s\n", src, size, dest);
}
