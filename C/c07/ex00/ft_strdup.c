#include <stdlib.h>

char *copy(char *ptr, char *src)
{
    char *cpy;

    cpy = ptr;
    if(ptr == ((void *)0))
    {
        return ((void *)0);
    }
    while(*src != '\0')
    {
        *cpy = *src;
        src++;
        cpy++;
    }
    *cpy = '\0';
    return ptr;
}

char *ft_strdup(char *src)
{
    char *ptr;
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        i++;
    }
    ptr = malloc(i + 1);
    ptr = copy(ptr, src);
    if(ptr == ((void *)0))
    {
        return ((void *)0);
    }
    
    return ptr;
}