#include <stdio.h>
int ft_iterative_power(int nb, int power);
int main(){
    printf("%d ",ft_iterative_power(3,3));
    printf("%d ",ft_iterative_power(3,0));
    printf("%d ",ft_iterative_power(0,0));
    printf("%d ",ft_iterative_power(-3,3));
    printf("%d ",ft_iterative_power(3,-3));
    return 0;
}