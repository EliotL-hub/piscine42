#include <unistd.h>

void ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	return(0);
}