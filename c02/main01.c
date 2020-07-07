#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "qwerty";
	char dest[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	int n = 15;

	printf("src: %s, num: %d, dest: %s", src, n, dest);
	printf("\n");
	printf("src: %s, num: %d, dest: %s", src, n, ft_strncpy(dest, src, n));
	printf("\n");
	return(0);	
}
