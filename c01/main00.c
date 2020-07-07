#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int nbr;
	int *nb;
	
	nbr = 41;
	nb = &nbr;
	printf("%d\n",nbr);
	ft_ft(nb);
	printf("%d\n",nbr);
	return(0);
}
