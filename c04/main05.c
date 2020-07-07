#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int	main(int argc, char *argv[])
{
	(void)argc;
	char *str = argv[1];
	char *base = argv[2];

	printf("%d\n", ft_atoi_base(str, base));
	printf("%d\n", ft_atoi_base(str, "dsf\n"));
}
