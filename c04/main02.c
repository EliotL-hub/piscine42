#include <stdlib.h>

void ft_putnbr(int nb);

int	main(int argc, char *argv[])
{
	(void)argc;
	int nb = atoi(argv[1]);

	ft_putnbr(nb);
	return(0);
}
