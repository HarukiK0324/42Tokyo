#include <stdio.h>
int *ft_range(int min, int max);
int main(){
    int min = 2147483639,max = 2147483647,i = min;
    int *ptr = ft_range(min,max);
    while(i < max){
        printf("%d ",*ptr);
        ptr++;
        i++;
    }
    return 0;
}