char **ft_split(char *str, char *charset);
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	char **tab;
	int i;

	tab = ft_split(av[1], av[2]);
	i = 0;
	while (tab[i] != 0)
	{
		printf("tab[%d]\t=\t\"%s\"\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	printf("tab[%d]\t=\t%s\n\n", i, tab[i]);
	free(tab[i]);
	free(tab);
	return (0);
}
