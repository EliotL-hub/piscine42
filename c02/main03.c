#include <stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d", ft_str_is_numeric(""));
	printf("%d", ft_str_is_numeric("01d2"));
	printf("%d", ft_str_is_numeric("000"));
	printf("%d", ft_str_is_numeric("aaa"));
	return (0);
}
