#include <stdio.h>
int ft_is_prime(int nb);
int main(){
    printf("%d ",ft_is_prime(16));
    printf("%d ",ft_is_prime(0));
    printf("%d ",ft_is_prime(-51));
    printf("%d ",ft_is_prime(1));
    printf("%d ",ft_is_prime(3));
    printf("%d ",ft_is_prime(5389));
    return 0;
}