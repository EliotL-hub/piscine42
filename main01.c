#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char *argv[])
{
	(void)argc;
	char *s1 = argv[1];
	char *s2 = argv[2];
	unsigned int n = atoi(argv[3]);

	printf("s1: %s s2: %s n:%d result:%d\n", s1, s2, n, strncmp(s1, s2, n));
	printf("s1: %s s2: %s n:%d result:%d\n", s1, s2, n, ft_strncmp(s1, s2, n));

	return (0);
}
