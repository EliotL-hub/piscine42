#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(int argc, char *argv[])
{
	(void)argc;
	char *res = ft_strdup(argv[1]); 

	printf("%s\n",res);
	free(res);
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",strdup(argv[2]));
	printf("%s\n",res);
}

