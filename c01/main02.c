#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int a = 41;
	int b = 42;

	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return(0);
}
