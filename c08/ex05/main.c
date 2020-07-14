#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char *argv[])
{
	t_stock_str *tab = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(tab);
	return (0);
}

