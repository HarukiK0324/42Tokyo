#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
    if(min >= max)
    {
        **range = ((void *)0);
        return 0;
    }
    int i;

    i = min;
    while(i < max)
    {
        **range;
        *range++;
    }
}