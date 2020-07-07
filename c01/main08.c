#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tb[]={5, 9, -23, 89, 895, 65, 47, 2147483647, -2147483648};
	int i = -1;

	while (++i < 9)
		printf("%d ", tb[i]);
	printf("\n");
	ft_sort_int_tab(tb, 9);
	i = - 1;
	while (++i < 9)
		printf("%d ", tb[i]);
	return(0);
}
