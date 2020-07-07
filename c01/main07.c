#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tableau[] = {5, 0, 4, 6, 2, 1};
    int i = 0;

    while (i < 6)
    {
        printf("tableau%d: %d\n", i, tableau[i]);
        i++;
    }
    printf("\n");
    ft_rev_int_tab(tableau, 6);
    i = 0;
    while (i < 6)
    {
        printf("tableau%d: %d\n", i, tableau[i]);
        i++;
    }
    printf("\n");
    return(0);
}
