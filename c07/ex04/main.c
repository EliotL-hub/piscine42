#include <stdio.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char *argv[])
{
	(void)argc;
	char *result = ft_convert_base(argv[1], argv[2], argv[3]);
	
	printf("%s\n", result);
	free(result);
	return(0);
}
