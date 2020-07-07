#include <stdio.h>
#include <stdlib.h>

void ft_putnbr_base(int nbr, char *base);

int	main(int argc, char *argv[])
{
	(void)argc;
	int nbr = atoi(argv[1]);
	char *base = argv[2];

	ft_putnbr_base(nbr, base);

	return (0);
}
