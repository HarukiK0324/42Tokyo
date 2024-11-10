#include <stdlib.h>
int size_of(int size, char **strs,char *sep)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    while(i < size)
    {
        while(**strs != '\0')
        {
            *strs++;
            j++;
        }
        strs++;
    }
    while(*sep != '\0')
    {
        k++;
        sep++;
    }
    return j + (size - 1) * k;
}
void append_sep(char *ptr,char *sep)
{

}
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *ptr;
    char *start;
    int i;
    
    int i = 0;
    if(size == 0)
    {
        ptr = malloc(1);
        *ptr = '\0';
        return ptr;
    }
    ptr = malloc(size_of(size,strs,sep));
    start = ptr;
    while(i < size)
    {
        while(*strs != '\0')
        {
            *ptr++ = *strs++;
        }
    }
    return ptr;
}