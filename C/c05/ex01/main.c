#include <stdio.h>
int ft_recursive_factorial(int nb);
int main(){
    printf("%d\n",ft_recursive_factorial(5));
    printf("%d\n",ft_recursive_factorial(10));
    printf("%d\n",ft_recursive_factorial(0));
    printf("%d\n",ft_recursive_factorial(-5));
    return 0;
}