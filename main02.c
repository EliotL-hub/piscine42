#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char source[] = "00";
	char destin[10] = "aaaaaa";
	char destin2[10] = "bbbbbb";

	printf("src: %s dest: %s\n", source, destin);
	printf("new dest: %s\n", strcat(destin, source));
	printf("src: %s dest: %s\n", source, destin2);
	printf("new dest: %s\n", ft_strcat(destin2, source));
	return(0);
}
