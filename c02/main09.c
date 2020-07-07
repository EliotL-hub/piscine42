#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "sAlUt, coMment .tu v5As ? 42mots ]quar?aNte-DEUX; @cinquante+et+un";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));

	return (0);
}
