#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 3;
	int b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("%d div\n", a);
	printf("%d mod\n", b);
}
