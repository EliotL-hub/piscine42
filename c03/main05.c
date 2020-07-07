#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(int argc, char *argv[])
{
	(void)			argc;
	char			*src = "123456789";
	char			dest[20] = "bbb";
	char			dest2[20] = "ccc";
	unsigned int	size = atoi(argv[1]);

	printf("src: %s, dest: %s\n", src, dest);
	printf("ret: %lu, ", strlcat(dest, src, size));
	printf("result: %s\n", dest);
	printf("src: %s, dest: %s\n", src, dest2);
	printf("ret: %d, ", ft_strlcat(dest2, src, size));
	printf("result: %s\n", dest2);

	return (0);
}
