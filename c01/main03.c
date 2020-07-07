#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div;
	int mod;

	ft_div_mod(10, 3, &div, &mod);
	printf("%d div \n", div);
	printf("%d mod \n", mod);
	return(0);
}
