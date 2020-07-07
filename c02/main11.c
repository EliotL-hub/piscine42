#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
	ft_putstr_non_printable("del \xd5");
	return (0);
}
