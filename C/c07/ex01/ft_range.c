#include <stdlib.h>

int *ft_range(int min, int max)
{
    if(min >= max){
        return ((void *)0);
    }
    int i;
    int *ptr;
    int *start;

    i = min;
    ptr = malloc(max - min);
    start = ptr;
    while(i < max)
    {
        *ptr++ = i++;
    }
    return start;
}
