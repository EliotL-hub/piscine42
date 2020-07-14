#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char *argv[])
{
	char *strs[] = {argv[1], argv[2]};
	char *sep = argv[3];
	int size = argc - 2;
	char *res = ft_strjoin(size, strs, sep);
	
	printf("%s\n", res);
	
	char *t1[4] = {"Bonjour", "Je", "M'appelle", "Yves"};
	char *join = ft_strjoin(4, t1, " ");
	printf("Bonjour Je M'appelle Yves: %s\n", join);
	free(join);
	char *t2[4] = {"Bonjour", "Je", "M'appelle", "Yves"};
	char *join2 = ft_strjoin(4, t2, ", ");
	printf("Bonjour, Je, M'appelle, Yves: %s\n", join2);
	free(join2);
	char *t3[4] = {"Bonjour", "Je", "M'appelle", "Yves"};
	char *join3 = ft_strjoin(0, t3, ", ");
	printf("rien: %s\n", join3);
	free(join3);

	printf("%s\n", res);
	return(0);
}
