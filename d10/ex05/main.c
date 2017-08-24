#include <stdio.h>

int     ft_sort(int n1, int n2)
{
    return (n1 - n2);
}

int     ft_is_sort(int *tab, int length, int (*f)(int, int));

int     main(void)
{
    int tab[] = {10,6,3,1,0};
    int tab2[] = {0};
    int length = 0;
    int length2 = 0;

    printf("%d\n", ft_is_sort(tab, length, &ft_sort));
    printf("%d\n", ft_is_sort(tab2, length2, &ft_sort));
}